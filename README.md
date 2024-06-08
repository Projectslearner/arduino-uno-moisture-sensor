# Soil Moisture Monitoring with Arduino

## Description

This project utilizes an Arduino to monitor soil moisture levels using a soil moisture sensor. The sensor's analog output is read by the Arduino, which then determines whether the soil is dry or wet based on a predefined threshold value. Additionally, an LED is used to visually indicate the soil moisture level, with brightness corresponding to the sensor reading.

## Components Needed

1. **Arduino UNO**
2. **Soil Moisture Sensor**
3. **LED**
4. **Resistor (for LED)**
5. **Jumper Wires**
6. **Breadboard**

## Circuit Wiring

1. **Soil Moisture Sensor:**
   - Connect the **VCC** pin to the **5V** pin on the Arduino.
   - Connect the **GND** pin to the **GND** pin on the Arduino.
   - Connect the **A0** pin to analog pin **A0** on the Arduino.

2. **LED (Optional Visual Indicator):**
   - Connect the **anode (longer leg)** to digital pin **6** on the Arduino.
   - Connect the **cathode (shorter leg)** to a current-limiting resistor, then to **GND**.

## Instructions

1. **Upload the Code:**
   - Copy and paste the provided code into the Arduino IDE.
   - Verify and upload the code to your Arduino board.

2. **Monitor the Output:**
   - Open the Serial Monitor to view the analog sensor values and soil moisture status (dry or wet).

## Project Operation

- **Initialization:**
  - The Arduino initializes serial communication at 9600 baud and sets the LED pin as an output, initially turned off.

- **Reading Sensor Data:**
  - The `readSensor()` function reads the analog value from the soil moisture sensor and maps it to an 8-bit value (0-255) for LED brightness control.

- **Determining Soil Moisture:**
  - The Arduino compares the sensor value with a predefined threshold. If the sensor value is above the threshold, it indicates dry soil; otherwise, it indicates wet soil.

- **LED Feedback:**
  - An LED provides visual feedback, with brightness varying according to the soil moisture level. Higher brightness indicates drier soil.

## Applications

1. **Gardening:** Monitor soil moisture to optimize watering schedules for plants.
2. **Automated Irrigation:** Implement automated irrigation systems based on soil moisture levels.
3. **Research:** Conduct experiments or studies involving soil moisture monitoring.

---

### Whether you're working on electronics projects, IoT applications, or robotics innovations, Projects Learner is your go-to platform for guidance and expertise.

🌐 [projectslearner.com](https://www.projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

## Made for you with ❣️ from ProjectsLearner