#include <Servo.h>

Servo myServo;

const int sensorPin = A0;   // Water sensor analog output
const int buzzerPin = 8;    // Buzzer
const int threshold = 300;  // Adjust based on your sensor

void setup() {
  pinMode(buzzerPin, OUTPUT);

  myServo.attach(9);
  myServo.write(0);         // Servo starts at 0°

  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);

  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);

  if (sensorValue > threshold) {
    digitalWrite(buzzerPin, HIGH);
    myServo.write(90);      // Rotate servo to 90°
  } else {
    digitalWrite(buzzerPin, LOW);
    myServo.write(0);       // Return servo to 0°
  }

  delay(100);
}