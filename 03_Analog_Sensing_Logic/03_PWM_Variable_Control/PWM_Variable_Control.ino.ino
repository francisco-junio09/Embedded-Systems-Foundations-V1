const int POT_PIN = A0;
const int LED_PIN = 6;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600); 
}

void loop() {

  int potValue = analogRead(POT_PIN);
  int pwmValue = map(potValue, 0, 1023, 0, 255); 
  pwmValue = constrain(pwmValue, 0, 255);
  analogWrite(LED_PIN, pwmValue); 

  Serial.print("Pot Value (0-1023): "); 
  Serial.print(potValue);
  Serial.print(" | PWM Output (0-255): ");
  Serial.println(pwmValue);
  
  delay(10);
}

