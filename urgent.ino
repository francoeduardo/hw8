
int ledPin = 5;


void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPin, OUTPUT);
}


void loop() {
  digitalWrite(ledPin, HIGH);
  delay(55);
  digitalWrite(ledPin, LOW);
  delay(55);

}
