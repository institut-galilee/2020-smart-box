/**
* Projet: smartbox (colis connecté)
* ce projet comprend 3 fonctionnalités
* 1) la mesure de la temperature et de lhumidité (DHT11)à internes du colis
* 2) la la geolocalisation du colis(module GPS)
* 3) la capture d'images en cas de besoin (caméra intégrée)
* Toutes ces informations seront ennvoyées sous forme de 
* notifications gérées par un module de communication
* (le module GSM)
*/
//Bibliothèques
#include <SoftwareSerial.h>
#include <TinyGPS.h>
#include "DHT.h"


//Declaration des variables
#define DHTPIN 2       
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
float lat = 28.5458,lon = 77.1703;
SoftwareSerial gpsSerial(3,4);
TinyGPS gps;


//Initialisations

void setup() 
{
  Serial.begin(9600); // connect serial
  gpsSerial.begin(9600); // connect gps sensor
  dht.begin();
}

// Main 

void loop() 
{
 geolocaliser();
 Serial.print(";");
 evaluerEtat();
 Serial.print("\n");
 delay(1000);
}

/**
* Fonction de géolocalisation
*/
void geolocaliser()
{
  while(gpsSerial.available()){ // check for gps data
    if(gps.encode(gpsSerial.read()))// encode gps data
    { 
    gps.f_get_position(&lat,&lon); // get latitude and longitude
    
   }
  }
  
  String latitude = String(lat,6);
  String longitude = String(lon,6);
  Serial.print(latitude+";"+longitude);
}
 
/**
* Fonction d'evaluaation de la température et l'umidité
*/
void evaluerEtat()
{
  // Wait a few seconds between measurements.
  delay(2000);

  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
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
  //Serial.print(F("%  Temperature: "));
  Serial.print(t);
  Serial.print(";");
  Serial.print(f);
}
