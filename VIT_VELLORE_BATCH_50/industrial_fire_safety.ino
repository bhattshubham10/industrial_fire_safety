const int flameSensorPin = 7;  // Pin connected to Flame Sensor
const int ledPin = 13;         // Pin connected to LED
const int buzzerPin = 11;      // Pin connected to Buzzer
void setup() {
  pinMode(flameSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}
void loop() {
  int flameValue = digitalRead(flameSensorPin);
  // Flame sensor is active LOW, so LOW means flame detected
  if (flameValue == LOW) {
    digitalWrite(ledPin, HIGH);    // Turn on LED
    tone(buzzerPin, 1000);         // Play a tone on the buzzer
    delay(500);                    // Delay for half a second
    digitalWrite(ledPin, LOW);     // Turn off LED
    noTone(buzzerPin);             // Stop the buzzer tone
    delay(500);                    // Delay for half a second
  } else {
    digitalWrite(ledPin, LOW);     // Turn off LED
    noTone(buzzerPin);             // Stop the buzzer tone
  }
}
