#include <Adafruit_Sensor.h>
#include <Wire.h>
#include <Adafruit_MPU6050.h>

// Pins
const int pressurePin = A0;
const int ledPin = 13;
const int buzzerPin = 9;

Adafruit_MPU6050 mpu;

void setup() {
  Serial.begin(9600);
  
  // Initialize components
  pinMode(pressurePin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  
  if (!mpu.begin()) {
    Serial.println("Failed to find MPU6050 chip");
    while (1);
  }
  Serial.println("MPU6050 Initialized!");

  // Timer setup
  digitalWrite(ledPin, HIGH);
  delay(2000); // Simulate 2-minute brushing period
  digitalWrite(ledPin, LOW);
}

void loop() {
  // Read pressure sensor
  int pressureValue = analogRead(pressurePin);
  if (pressureValue > 700) { // Adjust threshold as needed
    tone(buzzerPin, 1000); // Sound alert
    delay(500);
    noTone(buzzerPin);
  }

  // Movement tracking
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);

  Serial.print("Accel X: ");
  Serial.print(a.acceleration.x);
  Serial.print(", Y: ");
  Serial.print(a.acceleration.y);
  Serial.print(", Z: ");
  Serial.println(a.acceleration.z);

  delay(100);
}
