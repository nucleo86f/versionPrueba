
  
void setup()
{
  //Pin donde conectamos el led para ver el correcto funcionamiento del modulo
   pinMode(13,OUTPUT);
   //Configuracion de la velocidad del modulo 9600 por defecto, se puede cambiar
   //mediante comandos AT
   Serial1.begin(9600);
}
  
void loop()
{
   //Mientras el puerto serie del modulo bluetooth esta disponible
   while (Serial1.available())
   {
      //Guardamos en la variable dato el valor leido por el modulo bluetooth
       char dato= Serial1.read();
       //Comprobamos el dato
       switch(dato)
       {
         //Si recibimos una 'w' encendemos el led 13 y enviamos para mostrar
         //en Blueterm Led encendido
         case 'w':
         {
           digitalWrite(13,HIGH);
           Serial1.println("Led encendido");
           break;
         }
         //Si recibimos una 'e' apagamos el led 13 y enviamos para mostrar
         //en Blueterm Led apagado
         case 'e':
         {
           digitalWrite(13,LOW);
           Serial1.println("Led apagado");
           break;
         }
         //Si recibimos una 'r' encendemos y apagamos el led mediante la secuencia
         //programa y mostramos en Blueterm Led intermitente
         case 'r':
         {
           digitalWrite(13,HIGH);
           delay(200);
           digitalWrite(13,LOW);
           delay(200);
            digitalWrite(13,HIGH);
           delay(200);
           digitalWrite(13,LOW);
           delay(200);
            digitalWrite(13,HIGH);
           delay(200);
           digitalWrite(13,LOW);
           delay(200);
            digitalWrite(13,HIGH);
           delay(200);
           digitalWrite(13,LOW);
           delay(200);
            digitalWrite(13,HIGH);
           delay(200);
           digitalWrite(13,LOW);
           delay(200);
            digitalWrite(13,HIGH);
           delay(200);
           digitalWrite(13,LOW);
           delay(200);
            digitalWrite(13,HIGH);
           delay(200);
           digitalWrite(13,LOW);
           delay(200);
            digitalWrite(13,HIGH);
           delay(200);
           digitalWrite(13,LOW);
           delay(200);
            digitalWrite(13,HIGH);
           delay(200);
           digitalWrite(13,LOW);
           delay(200);
            digitalWrite(13,HIGH);
           delay(200);
           digitalWrite(13,LOW);
           delay(200);
           Serial1.println("Led intermitente");
           break;
         }
       }       
   }
}
