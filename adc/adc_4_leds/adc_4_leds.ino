

int ADCvalue = 0;

void setup() {

  pinMode(8,OUTPUT);
}
void loop() {
  ADCvalue = analogRead(A5);
  
  if (ADCvalue < 100) {
    digitalWrite(8,HIGH);
  } else {
    digitalWrite(8,LOW);
  }
  delay(50);
}