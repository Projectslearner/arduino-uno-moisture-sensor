/*
    Code by : Projects_learner
    Project name : Soil Moisture using Ardino UNO
    Modified Date : 08-06-2024
    Website : https://projectslearner.com/learn/arduino-uno-soil-moisture-sensor
*/

#define ledPin 6
#define sensorPin A0
#define threshold 300 // Threshold value for soil moisture

void setup() 
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

void loop()
 {
  int sensorValue = readSensor();
  Serial.print("Analog output: ");
  Serial.println(sensorValue);

  // Check soil condition
  if (sensorValue > threshold) 
  {
    Serial.println("Soil is dry");
  } else {
    Serial.println("Soil is wet");
  }

  delay(500);
}

// This function returns the analog data to the calling function
int readSensor() 
{
  int sensorValue = analogRead(sensorPin);  // Read the analog value from sensor
  int outputValue = map(sensorValue, 0, 1023, 255, 0); // Map the 10-bit data to 8-bit data
  analogWrite(ledPin, outputValue); // Generate PWM signal
  return sensorValue;  // Return analog moisture value
}
