void setup() {
  // Pin  13 is the onboard LED, setting it to output
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  //Print message to serial monitor when the light is on and off
  Serial.println("on");
  digitalWrite(13, LOW);
  delay(1000);
  Serial.println("off");
  

}
