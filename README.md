<<<<<<< HEAD

<h1 align="center">Welcome to Natan's ProjectWork 👋</h1>
<p>
  <img alt="Version" src="https://img.shields.io/badge/version-1.0-blue.svg?cacheSeconds=2592000" />
=======
<h1 align="center">Welcome to ProjectWork 👋</h1>
<p>
  <img alt="Version" src="https://img.shields.io/badge/version-1.0-blue.svg?cacheSeconds=2592000" />
  <a href="#" target="_blank">
    <img alt="License: NM" src="https://img.shields.io/badge/License-NM-yellow.svg" />
  </a>
>>>>>>> ae4a6dc444759cdd1e4740d3b45e9132b004e38a
</p>

> Sistema distribuito di misura/visualizzazione della temperatura. Questo programma in ambiente Arduino(ESP8266)invia temperatura,coordinate geografiche random insieme alla data e orario attuale ad un broker mqtt tramite WiFi. I dati vengono visualizzati tramite una UI usando il framework Node-RED

<<<<<<< HEAD

## How the Code Works

> In primo luogo, si includono le librerie per connettersi al Wi-Fi e ottenere tempo e creare un client NTP.
> <img alt="Libraries" src="/Users/natan/Documents/PlatformIO/Projects/ProjectWork/ReadmePics/Schermata 2020-06-05 alle 14.00.31.png" />

## Setting SSID and password

> Digitare le proprie credenziali di rete nelle seguenti variabili, in modo che l'ESP8266 sia in grado di stabilire una connessione Internet e di ottenere data e ora dal server NTP.
> <img alt="#" src="/Users/natan/Documents/PlatformIO/Projects/ProjectWork/ReadmePics/Schermata 2020-06-05 alle 14.03.53.png" />

## Initializing global variables

> Inizializazzione delle variabili globali e di char[msg] che contiene la grandezza del messaggio.
> <img alt="#" src="/Users/natan/Documents/PlatformIO/Projects/ProjectWork/ReadmePics/Schermata 2020-06-05 alle 14.27.00.png" />

## Preparing NTP Client

> Le due righe seguenti definiscono un NTP Client per richiedere data e ora ad un server NTP.
> <img alt="#" src="/Users/natan/Documents/PlatformIO/Projects/ProjectWork/ReadmePics/Schermata 2020-06-05 alle 14.05.56.png" />

> Quindi, inizializzare le variabili delle stringhe per salvare la data e l'ora.
> <img alt="#" src="/Users/natan/Documents/PlatformIO/Projects/ProjectWork/ReadmePics/Schermata 2020-06-05 alle 14.07.18.png" />

> Queste linee successive collegano l'ESP32 al router.
> <img alt="#" src="/Users/natan/Documents/PlatformIO/Projects/ProjectWork/ReadmePics/Schermata 2020-06-05 alle 14.09.35.png" />

> Successivamente, inizializzare il client NTP per ottenere data e ora da un server NTP.
> <img alt="#" src="/Users/natan/Documents/PlatformIO/Projects/ProjectWork/ReadmePics/Schermata 2020-06-05 alle 14.11.38.png" />

> È possibile utilizzare il metodo setTimeOffset() per regolare il tempo del fuso orario in millisecondi.
> <img alt="#" src="/Users/natan/Documents/PlatformIO/Projects/ProjectWork/ReadmePics/Schermata 2020-06-05 alle 14.13.13.png" />

> Queste righe successive ci garantiscono una data e un'ora valide:
> <img alt="#" src="/Users/natan/Documents/PlatformIO/Projects/ProjectWork/ReadmePics/Schermata 2020-06-05 alle 14.16.47.png" />

## Getting date and time

> Quindi, convertire la data e l'ora in un formato leggibile con il metodo getFormattedDate():
> <img alt="#" src="/Users/natan/Documents/PlatformIO/Projects/ProjectWork/ReadmePics/Schermata 2020-06-05 alle 14.18.28.png" />

> La data e l'ora vengono restituite nel seguente formato:
> <img alt="#" src="/Users/natan/Documents/PlatformIO/Projects/ProjectWork/ReadmePics/Schermata 2020-06-05 alle 14.19.52.png" />

> Se si desidera ottenere data e ora separatamente, è necessario dividere la stringa. La lettera "T"; separa la data dall'ora, così possiamo facilmente dividere quella Stringa. Questo è ciò che facciamo in queste prossime righe.
> <img alt="#" src="/Users/natan/Documents/PlatformIO/Projects/ProjectWork/ReadmePics/Schermata 2020-06-05 alle 14.21.18.png" />

> La data viene salvata sulla variabile dayStamp e l'ora sulla variabile timeStamp.

=======

> > > > > > > ae4a6dc444759cdd1e4740d3b45e9132b004e38a

## Author

👤 **NM-Natan Mekonnen**

<<<<<<< HEAD

- # LinkedIn: [@natan-mek](https://linkedin.com/in/natan-mek)

* LinkedIn: [@natan-mek](https://linkedin.com/in/natan-mek)
  > > > > > > > ae4a6dc444759cdd1e4740d3b45e9132b004e38a

## Show your support

Give a ⭐️ if this project helped you!

## <<<<<<< HEAD

# _This README was generated with ❤️ by [readme-md-generator](https://github.com/kefranabg/readme-md-generator)_

---

_This README was generated with ❤️ by [readme-md-generator](https://github.com/kefranabg/readme-md-generator)_

> > > > > > > ae4a6dc444759cdd1e4740d3b45e9132b004e38a
