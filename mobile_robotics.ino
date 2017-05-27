int l_frontpin = 2;
int l_backpin = 3;
int r_frontpin = 9;
int r_backpin = 10;
int l_ir = 4;
int m_ir = 5;
int r_ir = 6;
int flag = 0;
int count = 0;
int l;
int m;
int r;
void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  l = digitalRead(4);
  m = digitalRead(5);
  r = digitalRead(6);
  if(l == 1 && r == 1)
  {
    forward();
  }
  if( l == 0 && r == 1)
  {
    right();
  }
  if(l == 1 && r == 0)
  {
    left();
  }
  if( l == 0 && r == 0 && count == 0)
  {
    forward();
  }
  if( l == 0 && r == 0 && count == 1)
  {
    forward();
  }
 
 

}




void forward()
{
  analogWrite(2, 200);
  analogWrite(3, 0);
  analogWrite(9, 200);
  analogWrite(10, 0);
}
void backward()
{
  analogWrite(2, 0);
  analogWrite(3, 200);
  analogWrite(9, 0);
  analogWrite(10, 200);
}
void left()
{
  analogWrite(2, 0);
  analogWrite(3, 0);
  analogWrite(9, 200);
  analogWrite(10, 0);
}
void right()
{
  analogWrite(2, 200);
  analogWrite(3, 0);
  analogWrite(9, 0);
  analogWrite(10, 0);
}
void Uturn()
{
  analogWrite(2, 200);
  analogWrite(3, 0);
  analogWrite(9, 0);
  analogWrite(10, 200);
}

