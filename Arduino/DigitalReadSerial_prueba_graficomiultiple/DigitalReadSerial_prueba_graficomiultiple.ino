

/*
  DigitalReadSerial
 Reads a digital input on pin 2, prints the result to the serial monitor

 This example code is in the public domain.
 */

#include <DHT.h>

DHT dht(2, 22);// digital pin 2 has a pushbutton attached to it. Give it a name:



void setup() {
  
  Serial.begin(9600);
  
}


void loop() {
        int temp = dht.readTemperature();
        int humedad = dht.readHumidity();
        char text[25];
       sprintf(text, "%d,%d\n", temp, humedad);
       Serial.println(text);
        delay(10);        
}



