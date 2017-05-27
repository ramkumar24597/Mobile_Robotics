int l, r;
int count = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(2, INPUT);
  pinMode(4, INPUT);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  right_turn();
}

void readsensor()
{
  l =  digitalRead(2);
  r =  digitalRead(4);
}
void forward()
{
  analogWrite(5, 200);
  analogWrite(6, 0);
  analogWrite(9, 200);
  analogWrite(10, 0);
}
void left_turn()
{
  analogWrite(5, 0);
  analogWrite(6, 0);
  analogWrite(9, 200);
  analogWrite(10, 0);
}
void right_turn()
{
  analogWrite(5, 200);
  analogWrite(6, 0);
  analogWrite(9, 0);
  analogWrite(10, 0);
}
void turn_over()
{
  analogWrite(5, 200);
  analogWrite(6, 0);
  analogWrite(9, 0);
  analogWrite(10, 200);
}
void pause()
{
  analogWrite(5, 0);
  analogWrite(6, 0);
  analogWrite(9, 0);
  analogWrite(10, 0);
}
