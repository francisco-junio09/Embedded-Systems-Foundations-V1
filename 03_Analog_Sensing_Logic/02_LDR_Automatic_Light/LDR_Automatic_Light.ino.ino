const int pinPot = A0;   
const int pinLED = 6;    

void setup() {
  pinMode(pinLED, OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  int reading = analogRead(pinPot);
  
  int shine = map(reading, 120, 990, 0, 255); 
  
  shine = constrain(shine, 0, 255);

  analogWrite(pinoLED, shine);

  Serial.print("reading: ");
  Serial.print(reading);
  Serial.print(" | shine: ");
  Serial.println(shine);

  delay(10);
}




