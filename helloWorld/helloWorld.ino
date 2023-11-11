void setup() {
  // Initiate serial connection
  Serial.begin(9600);
  Serial.println("Hello Arduino");


}

void loop() {
  int var = 0;
  while (var < 10){
    Serial.println("In the Loop");
    delay(500);
    var++;
  }
  Serial.println("Done");

}
