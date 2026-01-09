const int pot = A0;
const int pinLed = 9;

unsigned long tempoUltimaLeitura = 0;
const unsigned long TIMEOUT_MS = 2000;

enum Estado {
  NORMAL,
  ALERTA,
  ERRO
};

Estado estadoAtual = NORMAL;
Estado estadoAnterior = NORMAL;

// ===== LEITURA =====
int receberDados() {
  return analogRead(pot);
}

// ===== DECISÃO =====
Estado decidirEstado(int valor) {
  if (valor >= 0 && valor <= 200) {
    return NORMAL;
  } 
  else if (valor >= 201 && valor <= 450) {
    return ALERTA;
  } 
  else {
    return ERRO;
  }
}

// ===== SAÍDA =====
void executarSaida(Estado estado) {
  switch (estado) {
    case NORMAL:
      digitalWrite(pinLed, LOW);
      Serial.println("Estado NORMAL");
      break;

    case ALERTA:
      digitalWrite(pinLed, HIGH);
      Serial.println("Estado ALERTA");
      break;

    case ERRO:
      digitalWrite(pinLed, LOW);
      Serial.println("Estado ERRO");
      break;
  }
}

void setup() {
  Serial.begin(115200);
  pinMode(pot, INPUT);
  pinMode(pinLed, OUTPUT);
}

// ===== LOOP =====
void loop() {
  int valor = receberDados();

  if (valor >= 0 && valor <= 1023) {
    tempoUltimaLeitura = millis(); // leitura válida
  }

  if (millis() - tempoUltimaLeitura > TIMEOUT_MS) {
    estadoAtual = ERRO;
  } else {
    estadoAtual = decidirEstado(valor);
  }

  if (estadoAtual != estadoAnterior) {
    executarSaida(estadoAtual);
    estadoAnterior = estadoAtual;
  }

  delay(200);
}
