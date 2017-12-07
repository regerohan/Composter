/*
    ---------------------------------------------------
    Project : Timer for Bio Drum
    Author : Rohan
    --------------------------------------------------
   Connect 5V on Arduino to VCC in relay module
   Connect GND on Arduino to GND on relay module
   Connect Pin 7 on Arduino to IN on relay module
   Connect to NO in relay
   ---------------------------------------------------
*/

const int rpin = 8;
//const int r2pin= A1;

void setup() {
  pinMode(rpin, OUTPUT);
  //pinMode(LED_BUILTIN, OUTPUT);
  //digitalWrite(rpin, LOW);
  //digitalWrite(LED_BUILTIN, LOW);
  //delay(5000);
}

void loop() {
  digitalWrite(rpin, LOW);
  delay(60000);
  digitalWrite(LED_BUILTIN, HIGH);
  //delay(10000);
  digitalWrite(rpin, HIGH);
  delay(60000);
  digitalWrite(LED_BUILTIN, LOW);
  //delay(7200000);
  //digitalWrite(r2pin,LOW);
  //digitalWrite(rpin,LOW);
  //delay(1000);
  //digitalWrite(rpin,HIGH);
  //digitalWrite(r2pin, HIGH);
  //delay(1000);
}

