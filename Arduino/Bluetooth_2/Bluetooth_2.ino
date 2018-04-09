const int LED = 13;
const int BTPWR = 12;

char nombreBT[10] = "MikeBT";
char velocidad ='4';//9600
char pin [5]= "0000";

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(BTPWR, OUTPUT);

  digitalWrite(LED, LOW);
  digitalWrite(BTPWR, HIGH);

  Serial1.begin(9600);

  Serial1.print("AT");
  delay(1000);

  Serial1.print("AT+NAME");
  Serial1.print(nombreBT);
  delay(1000);

  Serial1.print("AT+BAUD");
  Serial1.print(velocidad);
  delay(1000);

  Serial1.print("AT+PIN");
  Serial1.print(pin);
  delay(1000);

  digitalWrite(LED, HIGH);
}

void loop(){
  
}
