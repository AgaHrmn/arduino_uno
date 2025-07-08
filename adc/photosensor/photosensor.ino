int ADCvalue = 0;
int value_adjusted = 0;

void setup() {

  pinMode(8,OUTPUT);
}
void loop() {
  ADCvalue = analogRead(A5);
  value_adjusted = analogRead(A4);
  
  if (ADCvalue < value_adjusted) {
    digitalWrite(8,HIGH);
  } else {
    digitalWrite(8,LOW);
  }
  delay(50);
}