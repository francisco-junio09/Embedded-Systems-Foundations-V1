# 🇺🇸 Month 3 | Project 02: Automatic LDR-Reactive Light
# 🇧🇷 Mês 3 | Projeto 02: Luz Automática Reativa ao LDR

---

## 🇺🇸 Project Summary and Engineering Focus

This project transitions from basic digital output to **Analog Input (Sensors)**, demonstrating the core principle of an automated system: using an environmental reading (light intensity) to trigger a conditional output (the LED).

**The Engineering Challenge:** The primary challenge was establishing a reliable **Analog Read Threshold**. This required reading the sensor's raw value and mapping it to a Boolean decision (dark/light) to ensure the LED only activated at the required level of darkness.

#### Applied Mathematics & Concepts
* **Concept:** Intermediate Algebra (Boolean Logic/Conditional Statements)
* **Application:** The code applies a strict logical comparison to the analog input: if the LDR value is less than the defined threshold, the condition is **TRUE**, and the LED is turned on (`HIGH`).

#### Components Used
* Arduino Uno R3
* 1 LED
* 1 Light Dependent Resistor (LDR)
* 1 Resistor for the LED ($220\text{ \Omega}$)
* 1 Resistor for the Voltage Divider ($10\text{ k\Omega}$ recommended)
* Protoboard & Jumper Wires

---

## 🔌 Wiring and Sensor Configuration

The LDR was configured as part of a **Voltage Divider** circuit to ensure the Arduino's Analog Pin (`A0`) receives a stable, usable voltage range proportional to the light intensity.

**Current Flow Analysis (Simplified):**

$$\text{Light } \downarrow \text{ Intensity} \rightarrow \text{LDR Resistance } \uparrow \rightarrow \text{Analog Read } \downarrow \rightarrow \text{IF Read } < \text{Threshold} \rightarrow \text{LED ON}$$

![LDR Circuit Diagram](LDR_Circuit_Final.jpeg)

---

## 💻 Code Snippet (`LDR_Automatic_Light.ino`)

```cpp
const int LDR_PIN = A0;   // Analog Pin for LDR sensor
const int LED_PIN = 7;    // Digital Pin for LED
const int DARKNESS_THRESHOLD = 300; // Value defining 'dark' (adjust based on environment)

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600); // For calibration and monitoring the LDR value
}

void loop() {
  int lightValue = analogRead(LDR_PIN); // Reads the analog value (0-1023)

  // Conditional Logic (Applied Boolean Algebra)
  if (lightValue < DARKNESS_THRESHOLD) {
    digitalWrite(LED_PIN, HIGH); // Turn LED ON (Dark)
  } else {
    digitalWrite(LED_PIN, LOW);  // Turn LED OFF (Light)
  }

  // Display value for debugging
  Serial.println(lightValue); 
  delay(100);
}