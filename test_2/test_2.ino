int irl_pow = 7;
int irr_pow = 8;
int irl_op = 2;
int irr_op = 4;
int lm_f = 5;
int lm_b = 6;
int rm_f = 9;
int rm_b = 10;
int l, r;
int x = 0;
int y = 0;
int z = 0;
int w = 0;
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

void loop()
{
  // put your main code here, to run repeatedly:
  two_ones();
  pick(x);
  x++;
}

void pick(int point)
{
  int count = 0;
  if (point == 0)
  {
    if (l == 0 && r == 0 && count == 0)
    {
      left_turn();
      delay(2000);
      count++;
    }
    two_ones();
    if (l == 0 && r == 0 && count == 1)
    {
      right_turn();
      delay(2000);
      count++;
    }
    if (l == 0 && r == 0 && count == 2)
    {
      pause();
      return;
    }
  }
  if (point == 1 )
  {
    pause();
  }
}
void readsensor()
{
  l = digitalRead(4);
  r = digitalRead(2);
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
void two_ones()
{
  while (true)
  {
    readsensor();
    if (l == 1 && r == 1)
    {
      forward();
    }
    if (l == 0 && r == 1)
    {
      left_turn();
    }
    if (l == 1 && r == 0)
    {
      right_turn();
    }
    if (l == 0 && r == 0)
    {
      pause();
      return;
    }
  }
}

