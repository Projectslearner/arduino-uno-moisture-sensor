/*
    Project name : Arduino Uno Soil Moisture Sensor
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-soil-moisture-sensor
*/

// Define the pin connected to the soil moisture sensor
const int soilMoistureSensorPin = A0;

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Read the value from the soil moisture sensor
  int sensorValue = analogRead(soilMoistureSensorPin);

  // Map the sensor value to a percentage (0-100)
  int moisturePercentage = map(sensorValue, 0, 1023, 100, 0);

  // Print the sensor value and moisture percentage to the Serial Monitor
  Serial.print("Sensor Value: ");
  Serial.print(sensorValue);
  Serial.print("  |  Moisture Percentage: ");
  Serial.print(moisturePercentage);
  Serial.println("%");

  // Add a small delay to avoid flooding the Serial Monitor
  delay(1000);
}
