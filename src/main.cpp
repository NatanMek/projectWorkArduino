
#include <ESP8266WiFi.h>
#include <PubSubClient.h>
#include <WiFi.h>
#include <NTPClient.h>
#include <WiFiUdp.h>
#include <NTPtimeESP.h>
#include <ArduinoJson.h>

const char *ssid = "TISCALI-0080";
const char *password = "DB3K3UUHFM";
const char *mqtt_server = "broker.mqtt-dashboard.com";

WiFiClient espClient;
PubSubClient client(espClient);
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP);

unsigned long lastMsg = 0;
#define MSG_BUFFER_SIZE (50)
char msg[MSG_BUFFER_SIZE];
int value = 0;
StaticJsonDocument<1024> doc;
String formattedDate;
String dayStamp;
String timeStamp;

void setup_wifi()
{
  // We start by connecting to a WiFi network
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }

  randomSeed(micros());

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  timeClient.begin();
  timeClient.setTimeOffset(7200);
}

void reconnect()
{
  // Loop until we're reconnected
  while (!client.connected())
  {
    Serial.print("Attempting MQTT connection...");
    // Create a random client ID
    String clientId = "ESP8266Client-";
    clientId += String(random(0xffff), HEX);
    // Attempt to connect
    if (client.connect(clientId.c_str()))
    {
      Serial.println("connected");
      // Once connected, publish an announcement...
      client.publish("temperature-prova", "reconnected");
    }
    else
    {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
    }
  }
}

void setup()
{
  Serial.begin(115200);
  setup_wifi();
  client.setServer(mqtt_server, 1883);
  randomSeed(analogRead(0));
}

void loop()
{
  double temp;
  float lat;
  float lng;

  temp = random(500.0, 3900.0) / 100.0;
  lat = random(-3000, 10000) / 100.0;
  lng = random(-10000, -1000) / 100.0;

  if (!client.connected())
  {
    //reconnect();
  }
  client.loop();

  while (!timeClient.update())
  {
    timeClient.forceUpdate();
  }

  formattedDate = timeClient.getFormattedDate();
  int splitT = formattedDate.indexOf("T");
  dayStamp = formattedDate.substring(0, splitT);
  timeStamp = formattedDate.substring(splitT + 1, formattedDate.length() - 1);

  unsigned long now = millis();
  if (now - lastMsg > 2000)
  {
    lastMsg = now;
    ++value;
    doc["Temp: "] = temp;
    doc["Lat: "] = lat;
    doc["Long: "] = lng;
    doc["Date: "] = dayStamp;
    doc["Time: "] = timeStamp;

    Serial.println();
    serializeJsonPretty(doc, Serial);
  }
}