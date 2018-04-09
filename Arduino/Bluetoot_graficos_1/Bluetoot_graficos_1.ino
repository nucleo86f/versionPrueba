#include <DHT.h>

DHT dht(2, 22);// digital pin 2 has a pushbutton attached to it. Give it a name:



void setup() {
  
  Serial1.begin(9600);
  
}


void loop() {
        int temp = dht.readTemperature();
        int humedad = dht.readHumidity();
        char text[25];
       sprintf(text, "%d,%d\n", temp, humedad);
       Serial1.println(text);
        delay(10);        
}


