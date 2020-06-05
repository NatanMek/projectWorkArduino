<h1 align="center">Welcome to Natan's ProjectWork 👋</h1>
<p>
  <img alt="Version" src="https://img.shields.io/badge/version-1.0-blue.svg?cacheSeconds=2592000" />
</p>

**Sistema distribuito di misura/visualizzazione della temperatura. Questo programma in ambiente Arduino(ESP8266)invia temperatura,coordinate geografiche random insieme alla data e orario attuale ad un broker mqtt tramite WiFi. I dati vengono visualizzati tramite una UI usando il framework Node-RED**

## How the Code Works

**In primo luogo, si includono le librerie per connettersi al Wi-Fi e ottenere tempo e creare un client NTP.**

<p>
   <img src= "https://gitlab.com/NM93/projectwork/-/raw/master/ReadmePics/Schermata_2020-06-05_alle_14.00.31.png"
</p>

## Setting SSID and password

**Digitare le proprie credenziali di rete nelle seguenti variabili, in modo che l'ESP8266 sia in grado di stabilire una connessione Internet e di ottenere data e ora dal server NTP.**

<p>
   <img src= "https://gitlab.com/NM93/projectwork/-/raw/master/ReadmePics/Schermata_2020-06-05_alle_14.03.53.png"
</p>

## Initializing global variables

**Inizializazzione delle variabili globali e di char[msg] che contiene la grandezza del messaggio.**

<p>
   <img src= "https://gitlab.com/NM93/projectwork/-/raw/master/ReadmePics/Schermata_2020-06-05_alle_14.27.00.png"
</p>

## Preparing NTP Client

>**Le due righe seguenti definiscono un NTP Client per richiedere data e ora ad un server NTP.**

<p>
   <img src= "https://gitlab.com/NM93/projectwork/-/raw/master/ReadmePics/Schermata_2020-06-05_alle_14.05.56.png"
</p>

>**Quindi, inizializzare le variabili delle stringhe per salvare la data e l'ora.**

<p>
   <img src= "https://gitlab.com/NM93/projectwork/-/raw/master/ReadmePics/Schermata_2020-06-05_alle_14.07.18.png"
</p>

>**Queste linee successive collegano l'ESP8266 al router.**

<p>
   <img src= "https://gitlab.com/NM93/projectwork/-/raw/master/ReadmePics/Schermata_2020-06-05_alle_14.09.35.png"
</p>

>**Successivamente, inizializzare il client NTP per ottenere data e ora da un server NTP.**

<p>
   <img src= "https://gitlab.com/NM93/projectwork/-/raw/master/ReadmePics/Schermata_2020-06-05_alle_14.11.38.png"
</p>

>**È possibile utilizzare il metodo setTimeOffset() per regolare il tempo del fuso orario in millisecondi.**

<p>
   <img src= "https://gitlab.com/NM93/projectwork/-/raw/master/ReadmePics/Schermata_2020-06-05_alle_14.13.13.png"
</p>

>**Queste righe successive ci garantiscono una data e un'ora valide:**

<p>
   <img src= "https://gitlab.com/NM93/projectwork/-/raw/master/ReadmePics/Schermata_2020-06-05_alle_14.16.47.png"
</p>

## Getting date and time

>**Quindi, convertire la data e l'ora in un formato leggibile con il metodo getFormattedDate():**

<p>
   <img src= "https://gitlab.com/NM93/projectwork/-/raw/master/ReadmePics/Schermata_2020-06-05_alle_14.18.28.png"
</p>

>**La data e l'ora vengono restituite nel seguente formato:**

<p>
   <img src= "https://gitlab.com/NM93/projectwork/-/raw/master/ReadmePics/Schermata_2020-06-05_alle_14.19.52.png"
</p>

>**Se si desidera ottenere data e ora separatamente, è necessario dividere la stringa. La lettera "T"; separa la data dall'ora, così possiamo facilmente dividere quella Stringa. Questo è ciò che facciamo in queste prossime righe.**

<p>
   <img src= "https://gitlab.com/NM93/projectwork/-/raw/master/ReadmePics/Schermata_2020-06-05_alle_14.21.18.png"
</p>

>**La data viene salvata sulla variabile dayStamp e l'ora sulla variabile timeStamp.**

## Author

👤 **NM-Natan Mekonnen**

- LinkedIn: [@natan-mek](https://linkedin.com/in/natan-mek)

## Show your support

Give a ⭐️ if this project helped you!

_This README was generated with ❤️ by [readme-md-generator](https://github.com/kefranabg/readme-md-generator)_
