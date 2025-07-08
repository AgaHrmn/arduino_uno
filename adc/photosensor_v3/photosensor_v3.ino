int ADCvalue = 0;
int value_adjusted = 0;
bool led_turned_on = false;

void setup() {

  Serial.begin(9600);
  pinMode(8,OUTPUT);
  
}
void loop() {
  ADCvalue = analogRead(A5);
  value_adjusted = analogRead(A4);
  
  if (ADCvalue < value_adjusted) {
    digitalWrite(8,HIGH);
      if (led_turned_on == false) {
      Serial.println(value_adjusted);
    }
    led_turned_on = true;
  } else {
    digitalWrite(8,LOW);
    led_turned_on = false;
  }
}

