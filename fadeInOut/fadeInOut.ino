#define LED_PIN 11

void setup() {
  // Setting up light
  pinMode(LED_PIN, OUTPUT);

}

void loop() {
  // Fade in
  for ( int i = 0; i < 255; i++){
    analogWrite(LED_PIN, i);
    delay(10);
  }
  //Fade out
  for (int i = 255; i >= 0; i--){
    analogWrite(LED_PIN, i);
    delay(10);
  }

}
