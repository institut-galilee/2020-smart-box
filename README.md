# PROJET COLIS CONNECTÉ

## Description du projet

En effet avec le développement du E-commerce, le nombre de ventes en ligne ne cesse de croître (hausse de 13,4 % en France en 2018) et le trafic de marchandises prend une importante ampleur.
L'impact environnemental du secteur doit être énorme !

La livraison de colis étant une étape cruciale durant laquelle ce dernier peut être égaré, endommagé ou livré à la mauvaise adresse.
Notre projet consiste à développer une technologie de suivi de colis (connecté) par moyen de géolocalisation, permettant non seulement de suivre la livraison en temps réel, mais aussi de limiter l’impact environnemental du e-commerce. On pourrait aussi savoir si le colis a été ouvert, modifié ou dégradé.

## Utilités du projet

Le but de notre projet est de mettre fin aux colis perdus ou endommagés, d'assurer une livraison sûre, répondant aux besoins des clients. Il permettra d'avoir un contrôle absolu sur la transition, non seulement de par la gélocalisation du colis, mais aussi par les captures, et par la notification d'état sur l'application dédiée, au client.

## Scénario d'utilisation du projet

Afin que la livraison s'effectue dans les meilleurs conditions, nous allons mettre au point un système de colis connecté et dont les scénarios d'utilisation seront décrits suivant ces lignes ci-dessous : 

 1. La livraison s'effectuera à l'aide d'une boite à colis connecté à une application mobile, la boite en question comportera un GPS         pour gélocaliser le colis à tout moment, d'une caméra permettant de capturer l'état du colis et d'un capteur de température et           d'humidité. 
 2. L'utilisateur de l'application Android recevra des notifications sur l'état et la position du colis, ces                                 notifications seront envoyées grace au module gsm implenté dans la boite à colis.
 3. L'utilisateur pourrais, de par la notification reçue, rebondir sur l'application et connaitre les détails sur l'état de son colis.       Il pourrais ainsi savoir si son colis a été ouvert, modifié, dégradé ou en bon ou mauvais état selon la matière du contenu.

## Etat de l'art  

Il y'a certes plusieurs projets autour de cette technologie, mais le plus récent et l'unique française étant celui développé par la  start-up nantaise LivingPackets et qui consiste à mettre en place une boîte à colis connecté (The box). Leur technologie comporte des capteurs permettant d'alerter en cas d'ouverture et de fermeture, de choc, d'humidité ou de variation de température, notamment pour le contenu nécessitant que la chaine du froid soit respectée.

Il s’agit avant tout d’un emballage en libre circulation. Pour chaque trajet effectué, l’expéditeur paie deux euros (2 €), soit l’équivalent d’un colis classique pour le poids limite de 5 kilos de "The box".
Dans les faits, le destinataire d'un colis peut choisir de le conserver pour un prochain envoi, ou de le remettre à un tiers chargé de les collecter et de les redistribuer.

"The Box" a déjà été testé l’an passé par Orange, pour acheminer des LiveBox en fin de parcours, mais aussi par le géant CDiscount. LivingPackets devrait prochainement commercialiser une deuxième version de son colis, doté d’un écran plus grand et rechargeable par ses utilisateurs. Et, une fois leurs mille livraisons effectuées, les colis connectés subiront le même sort que leurs congénères : le recyclage.

### The box (LivingPackets)
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/colis.jpg"/>
<br></br>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/boite.jpeg"/>
<br></br>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/tel.jpg"/>
<br></br>

##### Source : LivingPackets (https://www.livingpackets.com/)

## Processus de conception et de fabrication

Notre solution consistera à mettre en place, au niveau de la boîte à colis, des capteurs (Arduino UNO, capteur d'humidité et de température, LED), un module GSM (notification de l'état du colis), un traqueur GPS (localisation du colis) et une caméra (montrer l'état du colis).
Et tout ceci à l'appui d'une application mobile de suivi en temps réel. 

## Etude fonctionnelle 
### Diagramme UML
#### Diagramme d'état transition
<br></br>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/Colis_connect%C3%A9.jpg"/>
<br></br>
#### Diagramme de cas d'utilisation 
<br></br>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/diagramme_smartbox.jpg"/>
<br></br>
#### Diagramme de classe 
<br></br>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/diagramme_class.jpg"/>
<br></br>

### Prototype de l'application 

#### Inscription 
<br></br>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/Inscription.jpg"/>
<br></br>

#### Connexion
<br></br>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/Connexion.jpg"/>
<br></br>

#### Géolocalisation 
<br></br>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/G%C3%A9olocalisation.jpg"/>
<br></br>

#### Notifications
<br></br>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/Notifications.jpg"/>
<br></br>

#### Paramètres Compte
<br></br>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/Param%C3%A8tres.jpg"/>
<br></br>

### Prototype du Projet sur fritzing
<h3>GPS </h3>
<p>Branchement</p>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/GY-NEO6MV2_bb.png"/>
<br>
<p>Schéma</p>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/GY-NEO6MV2_schéma.png"/>
<br>
<h3>GSM </h3>
<p>En cours de mise à jour</p>
<br>
<h3>Capteur d'humidité et de Température</h3>
<p>Branchement</p>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/capteur_h_t.png"/>
<br>
<p>Schéma</p>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/capteur_h_t_schéma.png"/>
<br>
<h3>Caméra</h3>
<p>En cours de mise à jour</p>

## Branchements concrets et codes 
### GPS
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/branchement_GPS.jpg"/>
<br>

#### Le code gps.ino

```INO
#include <LiquidCrystal.h>
#include <SoftwareSerial.h>
#include <TinyGPS.h>
//long   lat,lon; // create variable for latitude and longitude object
float lat = 28.5458,lon = 77.1703; // create variable for latitude and longitude object 
SoftwareSerial gpsSerial(3,4);//rx,tx
LiquidCrystal lcd(A0,A1,A2,A3,A4,A5);
TinyGPS gps; // create gps object
void setup(){
Serial.begin(9600); // connect serial
//Serial.println("The GPS Received Signal:");
gpsSerial.begin(9600); // connect gps sensor
lcd.begin(16,2);
}
void loop(){
    while(gpsSerial.available()){ // check for gps data
    if(gps.encode(gpsSerial.read()))// encode gps data
    { 
    gps.f_get_position(&lat,&lon); // get latitude and longitude
    // display position
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print("GPS Signal");
    //Serial.print("Position: ");
    //Serial.print("Latitude:");
    //Serial.print(lat,6);
    //Serial.print(";");
    //Serial.print("Longitude:");
    //Serial.println(lon,6); 
    lcd.setCursor(1,0);
    lcd.print("LAT:");
    lcd.setCursor(5,0);
    lcd.print(lat);
    //Serial.print(lat);
    //Serial.print(" ");
    
    lcd.setCursor(0,1);
    lcd.print(",LON:");
    lcd.setCursor(5,1);
    lcd.print(lon); 
   }
  }
  
  String latitude = String(lat,6);
    String longitude = String(lon,6);
  Serial.println(latitude+";"+longitude);
  delay(1000);
  
}
```
#### GSM
<p>En cours de mise à jour</p>
<br>
<h3>Capteur d'humidité et de Température</h3>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/doc/pictures/capteur_h_t_branchement.jpg"/>
<br>
### **Le code du capteur d'humidité et de température**
```INO
#include "DHT.h"
#define DHTPIN 2

#define DHTTYPE DHT11   // DHT 11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println(F("DHT11 test!"));

  dht.begin();
}

void loop() {
  // Wait a few seconds between measurements.
  delay(2000);

  // Reading humidity
  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();
  // Read temperature as Fahrenheit (isFahrenheit = true)
  float f = dht.readTemperature(true);

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  // Compute heat index in Fahrenheit (the default)
  float hif = dht.computeHeatIndex(f, h);
  // Compute heat index in Celsius (isFahreheit = false)
  float hic = dht.computeHeatIndex(t, h, false);

  Serial.print(F("Humidity: "));
  Serial.print(h);
  Serial.print(F("%  Temperature: "));
  Serial.print(t);
  Serial.print(F("°C "));
  Serial.print(f);
  Serial.print(F("°F  Heat index: "));
  Serial.print(hic);
  Serial.print(F("°C "));
  Serial.print(hif);
  Serial.println(F("°F"));
}
```
<h3>Caméra</h3>
<p>En cours de mise à jour</p>

## Application et codes
http://ai2.appinventor.mit.edu/#6020199882555392

# Conclusion 

La technologie du colis connecté, premier emballage intelligent durable pour le commerce électronique dans le monde, un controle total sur chaque livraison. En plus d'une application qui permettrais une facilité de suivi de colis en toute liberté.
Tout en espérant atteindre notre objectif qu’est de réussir ce projet, vivement que le travail continue dans cette lancée de colis connecté.

