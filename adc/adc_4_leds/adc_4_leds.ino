#define red 2
#define yellow 3
#define green 4
#define blue 5

int ADCvalue = 0;
int ADCscaled = 0;

void setup() {

  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
}
void loop() {
  ADCvalue = analogRead(A5);
  ADCscaled = map(ADCvalue,0,1023,1,5);

  switch(ADCscaled) {
    case 1:
      digitalWrite(red, HIGH);
      digitalWrite(yellow, LOW);
      digitalWrite(green, LOW);
      digitalWrite(blue, LOW);
      break;
    case 2:
      digitalWrite(red, LOW);
      digitalWrite(yellow, HIGH);
      digitalWrite(green, LOW);
      digitalWrite(blue, LOW);
      break;
    case 3:
      digitalWrite(red, LOW);
      digitalWrite(yellow, LOW);
      digitalWrite(green, HIGH);
      digitalWrite(blue, LOW);
      break;
    case 4:
      digitalWrite(red, LOW);
      digitalWrite(yellow, LOW);
      digitalWrite(green, LOW);
      digitalWrite(blue, HIGH);
      break;
    case 5:
      digitalWrite(red, HIGH);
      digitalWrite(yellow, HIGH);
      digitalWrite(green, HIGH);
      digitalWrite(blue, HIGH);
      break;

  }

}