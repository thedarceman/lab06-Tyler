void setup() {
  pinMode(12,OUTPUT);
}

void loop() {
    //this code will blink one led
  delay(1000);
  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(12,LOW);
}