// Pin definitions
const int laserPin  = 12;   // Laser module pin
const int ldrPin    = A0;   // LDR / photodiode connected to analog pin
const int buzzerPin = 8;    // Buzzer pin

// Threshold value 
int threshold = 500;

void setup() {
  pinMode(laserPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);

  digitalWrite(laserPin, LOW);   // Turn laser ON (active LOW module)
  digitalWrite(buzzerPin, LOW);  // Buzzer OFF

  Serial.begin(9600);            // For debugging
}

void loop() {
  int ldrValue = analogRead(ldrPin);
  Serial.println(ldrValue);

  // Alarm turns on when laser beam is interrupted
  if (ldrValue < threshold) {
    digitalWrite(buzzerPin, HIGH);  // Alarm ON
  } else {
    digitalWrite(buzzerPin, LOW);   // Alarm OFF
  }

  delay(100);
}
