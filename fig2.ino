void setup() {
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
    //this code will blink one led twice as long as another one
  delay(1000);
  digitalWrite(12,HIGH);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(12,LOW);
  delay(1000);
  digitalWrite(13,LOW);
}