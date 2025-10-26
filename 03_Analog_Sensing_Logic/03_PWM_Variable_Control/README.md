# 🇺🇸 Month 3 | Project 03: Variable Brightness Control (PWM)
# 🇧🇷 Mês 3 | Projeto 03: Controle Variável de Brilho (PWM)

---

## 🇺🇸 Project Summary and Engineering Focus

This project marks the successful integration of **Analog Input (Potentiometer)** with **Simulated Analog Output (PWM)**. This skill is critical, as PWM is the foundational technique used for controlling the speed of motors (DC Motors) and the position of servos in future advanced robotics and exoskeleton projects.

**The Engineering Challenge:** The primary challenge was the necessity of **mapping** the incoming analog value (0-1023) from the Potentiometer to the outgoing PWM range (0-255) for the LED. Failure to map results in incorrect control and potential loss of data resolution.

#### Applied Mathematics & Concepts
* **Concept:** Algebra (Linear Mapping) and Constrained Values.
* **Application:** The `map()` function converts the Potentiometer's 10-bit input (0-1023) to the 8-bit output required by PWM (`analogWrite`). The `constrain()` function ensures the mapped value remains within the legal boundaries (0 to 255).

#### Components Used
* Arduino Uno R3
* 1 LED
* 1 Potentiometer (Variable Resistor)
* 1 Resistor for the LED ($220\text{ \Omega}$)
* Protoboard & Jumper Wires

---

## 🔌 Wiring and System Configuration

The Potentiometer acts as a **Variable Voltage Divider**, feeding a voltage directly proportional to its physical rotation into the Arduino's Analog Pin (`A0`). The LED must be connected to a PWM-enabled Digital Pin (pins marked with a `~`).

**Data Flow (0-1023 $\rightarrow$ 0-255):**

$$\text{Potentiometer Rotation} \rightarrow \text{Analog Read (0-1023)} \xrightarrow{\text{map()}} \text{PWM Value (0-255)} \rightarrow \text{LED Brightness}$$

![Potentiometer Circuit Diagram](Potentiometer_Circuit_Final.jpeg)

---

## 💻 Code Snippet (`PWM_Variable_Control.ino`)

```cpp
const int POT_PIN = A0;   // Analog Input for Potentiometer
const int LED_PIN = 9;    // PWM-Enabled Digital Pin for LED (must be a ~ pin)

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  int potValue = analogRead(POT_PIN); // Reads analog value (0-1023)
  
  // Mapping the 10-bit Analog Input to the 8-bit PWM Output
  int pwmValue = map(potValue, 0, 1023, 0, 255); 
  
  // Ensures the value is within bounds (0-255)
  pwmValue = constrain(pwmValue, 0, 255);
  
  analogWrite(LED_PIN, pwmValue); // Controls LED brightness (PWM)

  Serial.print("Pot Value (0-1023): "); 
  Serial.print(potValue);
  Serial.print(" | PWM Output (0-255): ");
  Serial.println(pwmValue);
  
  delay(10); // Pequeno atraso para estabilidade da leitura
}