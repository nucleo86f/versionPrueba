int input;

void setup() {
  pinMode(13, OUTPUT); // Declaramos que utilizaremos el pin 13 como salida
  Serial1.begin(9600); //Se inicia la comunicación serie
}

void loop() {
  if (Serial1.available()) {

    input = Serial1.read();

    if (input == '1') {

      digitalWrite(13, HIGH); //Si el valor de input es 1, se enciende el LED
      Serial.println("pin 13 encendido");
    }
    else
    {

      digitalWrite(13, LOW); //Si el valor de input es diferente de 1, se apaga el LED
      Serial.println("pin 13 apagado");
    }

  }
}

