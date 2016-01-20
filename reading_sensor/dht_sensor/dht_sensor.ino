// Code to measure data from the DHT11 sensor

// Libraries
#include "DHT.h"

// DHT sensor
#define DHTPIN 7 
#define DHTTYPE DHT11

// DHT instance
DHT dht(DHTPIN, DHTTYPE);

void setup()
{
  // Initialize the Serial port
  Serial.begin(9600);
  
  // Init DHT
  dht.begin();
}


void loop()
{
  // Measure from DHT
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  
  // Display temperature
  Serial.print("Temperature: ");
  Serial.print((int)temperature);
  Serial.println(" C");
  
   // Display humidity
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println("%");
  
  // Wait 500 ms
  delay(500);
  
}
