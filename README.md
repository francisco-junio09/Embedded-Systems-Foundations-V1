# Embedded Systems Foundations – 24 Month Engineering Path  
# Fundamentos de Sistemas Embarcados – Jornada de 24 Meses

Este repositório documenta uma jornada estruturada de 24 meses dedicada ao
desenvolvimento de competências em sistemas embarcados, eletrônica aplicada,
controle, robótica e engenharia de sistemas, por meio de projetos práticos e
documentação técnica.

This repository documents a structured 24-month learning path focused on
embedded systems, applied electronics, control systems, robotics, and systems
engineering through hands-on projects and technical documentation.

---

## 🎯 Objetivo | Objective

🇧🇷 Desenvolver uma base sólida em engenharia por meio da aplicação prática
de conceitos fundamentais, com foco em raciocínio técnico, arquitetura de
sistemas e documentação profissional.

🇺🇸 Develop a solid engineering foundation through practical application of
fundamental concepts, focusing on technical reasoning, system architecture,
and professional documentation.

---

## 🛠️ Módulos Desenvolvidos | Developed Modules

---

### 🛠️ Módulo 03: Fundamentos de Eletrônica e Controle de I/O Digital  
### 🛠️ Module 03: Electronics Fundamentals and Digital I/O Control

* **Foco Principal | Main Focus:**  
  🇧🇷 Demonstração do domínio de entradas e saídas digitais e analógicas,
  sensores e aplicação de lógica booleana para controle de sistemas embarcados.  

  🇺🇸 Demonstration of proficiency in digital and analog I/O, sensors, and
  Boolean logic applied to embedded system control.

* **Projeto 01 | Project 01:** Diagnóstico e Solução de Circuito em Série (LED Blink)  
  * **Status:** Concluído | Completed  
  * **Relatório Técnico | Technical Report:**  
    [Acesse o Relatório Detalhado](03_Analog_Sensing_Logic/01_LED_Blink_Diagnosis/README.md)

* **Projeto 02 | Project 02:** Luz Automática Reativa ao LDR  
  * **Status:** Concluído | Completed  
  * **Relatório Técnico | Technical Report:**  
    [Acesse o Relatório Detalhado](03_Analog_Sensing_Logic/02_LDR_Automatic_Light/README.md)

* **Projeto 03 | Project 03:** Controle Variável de Brilho (PWM)  
  * **Status:** Concluído | Completed  
  * **Relatório Técnico | Technical Report:**  
    [Acesse o Relatório Detalhado](03_Analog_Sensing_Logic/03_PWM_Variable_Control/README.md)

---

### 🧠 Módulo 04: Máquinas de Estados Finitas (FSM)  
### 🧠 Module 04: Finite State Machines (FSM)

* **Foco Principal | Main Focus:**  
  🇧🇷 Aplicação de Máquinas de Estados Finitas para controle robusto de sistemas
  embarcados, eliminando lógica sequencial frágil e preparando base para
  sistemas autônomos.  

  🇺🇸 Application of Finite State Machines for robust embedded system control,
  eliminating fragile sequential logic and preparing the foundation for
  autonomous systems.

* **Projeto 01 | Project 01:** Portão Automático com FSM  
  * **Status:** Concluído | Completed  
  * **Relatório Técnico | Technical Report:**  
    [Acesse o Relatório Detalhado](04_Finite_State_Machines/01_Automatic_Gate/README.md)

---

### 🧩 Módulo 05: Arquitetura de Software Embarcado e Robustez de Execução  
### 🧩 Module 05: Embedded Software Architecture & Execution Robustness

* **Foco Principal | Main Focus:**  
  🇧🇷 Desenvolvimento de software embarcado com separação de responsabilidades,
  controle por estados, validação temporal (timeout) e tratamento de falhas.  

  🇺🇸 Development of embedded software with clear separation of responsibilities,
  state-driven control, temporal validation (timeout), and fault handling.

* **Projeto Final | Final Project:** FSM com Timeout e Estado de Erro  
  * **Status:** Concluído | Completed  
  * **Relatório Técnico | Technical Report:**  
    [Acesse o Relatório Detalhado](05_Embedded_Logic_FSM/Final_Project_FSM/README.md)

---

## 📌 Observações | Notes

🇧🇷 Todos os projetos priorizam organização, documentação técnica e evolução
progressiva de complexidade, seguindo princípios de engenharia aplicada e
boas práticas de desenvolvimento embarcado.

🇺🇸 All projects prioritize organization, technical documentation, and
progressive complexity, following applied engineering principles and embedded
software best practices.

Módulo 06: Controle de Potência e Atuadores (Motores DC)
⚙️ Module 06: Power Control and Actuators (DC Motors)

Foco Principal | Main Focus:
🇧🇷 Implementação de controle de potência para atuadores, utilizando drivers
de alto desempenho, modulação por largura de pulso (PWM) e organização
adequada da distribuição de energia em sistemas embarcados.

Ênfase em integração entre hardware e software, validação prática de
circuitos e diagnóstico de falhas reais.

🇺🇸 Implementation of power control for actuators using high-performance
drivers, Pulse Width Modulation (PWM), and proper power distribution in
embedded systems.

Emphasis on hardware-software integration, practical circuit validation,
and real-world debugging.

Projeto 01 | Project 01: Controle de Motor DC com BTS7960
Status: Concluído | Completed

Descrição | Description:
🇧🇷 Desenvolvimento de um sistema de controle bidirecional de motor DC
utilizando o driver BTS7960, com controle de velocidade via PWM e
inversão de rotação por lógica digital.

O sistema foi alimentado por fonte regulada com módulo LM2596, com
distribuição de energia via protoboard e validação por testes manuais e
automatizados.

🇺🇸 Development of a bidirectional DC motor control system using the
BTS7960 driver, with speed control via PWM and direction control through
digital logic.

The system was powered by a regulated supply using an LM2596 module,
with power distribution via breadboard and validation through both manual
and automated testing.

Principais Conceitos Aplicados | Key Concepts Applied:
Controle PWM para atuadores
Drivers de potência (BTS7960)
Distribuição de energia (barramento)
GND comum em sistemas embarcados
Separação entre lógica e potência
Debug de hardware (teste manual vs software)
Relatório Técnico | Technical Report:
Acesse o Projeto Completo
Status do Sistema | System Status:
✅ Controle bidirecional funcional
✅ Integração com Arduino validada
✅ Testes manuais e automatizados concluídos