void setup() {
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
    // this code will blink two leds on and off at opposite intervals
  digitalWrite(12,HIGH);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  delay(1000);
}