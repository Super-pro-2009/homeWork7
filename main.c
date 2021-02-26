int ledpin = 5;
//Вторая часть задания(для первой забыл некоторые функции)
int analogPin = 3;
int val = 0;
void setup() {
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  val = analogRead(analogPin);
  val = map(0, 1023, 0, 4);
  ledpin = ledpin + val;
  analogWrite(ledPin, 255);
}
