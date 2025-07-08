#define red 2
#define yellow 3
#define green 4
#define blue 5

int ADCvalue = 0;

void setup() {
  pinMode(2,OUTPUT);
}
void loop() {
  ADCvalue = analogRead(A5);

}