int rpwm = 5;
int lpwm = 6;

void setup() {
  pinMode(rpwm, OUTPUT);
  pinMode(lpwm, OUTPUT);
}

void loop() {

  // frente
  analogWrite(rpwm, 180);
  analogWrite(lpwm, 0);
  delay(4000);

  // parar
  analogWrite(rpwm, 0);
  analogWrite(lpwm, 0);
  delay(2000);

  // trás
  analogWrite(rpwm, 0);
  analogWrite(lpwm, 180);
  delay(4000);

}