const int signalPin = 26;

void setup() {
  Serial.begin(115200);
  pinMode(signalPin, INPUT);
}

void loop() {
  int signalStatus = digitalRead(signalPin);

  if (signalStatus == HIGH) {
    Serial.println("High voltage detected!");
  } else {
    Serial.println("No high voltage detected (<=0.7V).");
  }

  delay(500);
}