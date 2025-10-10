# 🇧🇷 Mês 3 | Projeto 01: Diagnóstico e Solução de Circuito em Série (LED Blink)
# 🇺🇸 Month 3 | Project 01: Series Circuit Diagnosis and Solution (LED Blink)

---

## 🇧🇷 Resumo do Projeto e Desafio Resolvido

Este projeto demonstra o controle básico de uma saída digital (LED) utilizando o Arduino Uno, aplicando os fundamentos de Eletrônica Básica (Resistores e LEDs).

**O Desafio de Engenharia:** O sucesso do projeto dependeu primariamente da correção de uma falha física: o **mau contato intermitente** e a quebra da conexão em série na protoboard. A solução exigiu a validação do fluxo de corrente, garantindo que o Resistor e o Ânodo do LED compartilhassem o **mesmo ponto horizontal** na placa.

#### Matemática Aplicada
* **Conceito:** Álgebra Intermediária (Lógica Booleana)
* **Aplicação:** O código implementa a lógica `HIGH` (Verdadeiro, 5V) e `LOW` (Falso, 0V) para controlar o estado do LED, uma aplicação direta da Lógica Booleana.

#### Componentes Utilizados
* Arduino Uno R3
* 1 LED
* 1 Resistor de $150\text{ \Omega}$ (ou $220\text{ \Omega}$)
* Protoboard
* Fios Jumper

---

## 🇺🇸 Technical Details and Solved Challenge

This project demonstrates the fundamental control of a digital output (LED) with the Arduino Uno.

**The Solved Engineering Challenge:** Project success hinged on resolving a critical physical fault: **intermittent poor contact** and a broken series connection on the breadboard. The solution involved validating the current flow, ensuring the Resistor and the LED's Anode shared the **exact same horizontal point** on the board.

* **Controlling Pin:** Digital Pin 7
* **Timing:** LED ON for $6000\text{ms}$ (6 seconds), LED OFF for $7000\text{ms}$ (7 seconds).

---

## 🔌 Fiação e Estrutura em Série (Wiring and Series Structure)

O circuito foi montado em uma configuração **HIGH-SIDE SWITCHING**, garantindo que o Resistor limite a corrente para o LED.

**Fluxo da Corrente (Current Flow):**

$$\text{Pino Digital 7} \rightarrow \text{Resistor (Limitação)} \rightarrow \text{Ânodo (+)} \rightarrow \text{Cátodo (-)} \rightarrow \text{GND}$$

![Diagrama de Fiação do LED Blink em Série](Circuito_Final.jpg)

---

## 💻 Código Fonte (`LED_Blink_Final.ino`)

```cpp
const int pinLed = 7;

void setup() {
  // Define o pino 7 como saída (OUTPUT)
  pinMode(pinLed, OUTPUT);
}

void loop() {
  // Liga o LED (HIGH) e espera 6 segundos (6000ms)
  digitalWrite(pinLed, HIGH);
  delay(6000); 

  // Desliga o LED (LOW) e espera 7 segundos (7000ms)
  digitalWrite(pinLed, LOW);
  delay(7000);
}