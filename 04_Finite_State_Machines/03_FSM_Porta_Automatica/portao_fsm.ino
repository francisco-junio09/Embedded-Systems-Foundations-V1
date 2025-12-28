#include <Servo.h>

#define TRIG_PIN 6
#define ECHO_PIN 7
#define SERVO_PIN 9

Servo porteira;

// ===== CONFIGURAÇÕES ====
const float DISTANCIA_ABERTURA = 15.0; // cm
const int ANGULO_ABERTO = 90;
const int ANGULO_FECHADO = 0;

// ===== ESTADOS DA PORTEIRA =====
enum EstadoPorteira {
  FECHADA,
  ABERTA
};

EstadoPorteira estadoAtual = FECHADA;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  porteira.attach(SERVO_PIN);
  porteira.write(ANGULO_FECHADO);

  Serial.begin(9600);
}

// ===== FUNÇÃO DE MEDIÇÃO =====
float medirDistancia() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG_PIN, LOW);

  long duracao = pulseIn(ECHO_PIN, HIGH, 30000); // timeout 30ms

  if (duracao == 0) {
    return 999; // nada detectado
  }

  float distancia = duracao * 0.034 / 2;
  return distancia;
}

void loop() {
  float distancia = medirDistancia();

  switch (estadoAtual) {

    case FECHADA:
      if (distancia <= DISTANCIA_ABERTURA) {
        porteira.write(ANGULO_ABERTO);
        estadoAtual = ABERTA;
        Serial.println("Porteira ABERTA");
      }
      break;

    case ABERTA:
      if (distancia > DISTANCIA_ABERTURA) {
        porteira.write(ANGULO_FECHADO);
        estadoAtual = FECHADA;
        Serial.println("Porteira FECHADA");
      }
      break;
  }

  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  delay(100);
}
