const int pinLed = 7;
void setup()
{
  pinMode(pinLed, OUTPUT);
}

void loop()
{
  digitalWrite(pinLed, HIGH);
  delay(6000); 
  digitalWrite(pinLed, LOW);
  delay(7000); 
}
