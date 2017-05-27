int x = 0;
int y = 0;
int z = 0;
int l;
int m;
int r;
int l_frontpin = 2;
int l_backpin = 3;
int r_frontpin = 9;
int r_backpin = 10;
int l_ir = 4;
int m_ir = 5;
int r_ir = 6;
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);

}

void loop()
{
  l = digitalRead(4);
  m = digitalRead(5);
  r = digitalRead(6);
  pick(x);
  x += 2;
  origin(y);
  y++;
  place(z);
  z++;
  


}
void pick(int point)
{
  int count = 0;
  int object = 0;
  if (point == 0)
  {
    if (l == 0 && r == 0 && count == 0)
    {
      forward();
    }
    two_ones();
    if (l == 0 && r == 0 && count == 1)
    {
      forward();
    }
    two_ones();
    detect();
    if (l == 0 && r == 0 && count == 2 && object == 1)
    {
      return;
    }
    if (l = 0 && r == 0 && count == 2 && object == 0)
    {
      right();
      delay(400);
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 3 )
    {
      return;
    }
  }
  if (point == 2)
  {
    if (l == 0 && r == 0 && count == 0)
    {
      forward();
    }
    two_ones();
    if (l == 0 && r == 0 && count == 1)
    {
      forward();
    }
    two_ones();
    if (l == 0 && r == 0 && count == 2 && object == 1)
    {
      return;
    }
    if (l = 0 && r == 0 && count == 2 && object == 0)
    {
      left();
      delay(400);
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 3 )
    {
      return;
    }
  }
}
void origin(int point)
{
  int count = 0;
  if (point == 0)
  {
    if (l == 0 && r == 0 && count == 0 && object == 1)
    {
      Uturn();
      delay(2000);
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 1)
    {
      forward();
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 2)
    {
      return;
    }
  }
  if (point == 1)
  {
    if (l == 0 && r == 0 && count == 0 && object == 1)
    {
      Uturn();
      delay(2000);
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 1)
    {
      left();
      delay(400);
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 2)
    {
      forward();
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 3)
    {
      return;
    }
  }
  if (point == 2)
  {
    if (l == 0 && r == 0 && count == 0 && object == 1)
    {
      Uturn();
      delay(2000);
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 1)
    {
      right();
      delay(400);
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 2)
    {
      forward();
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 3)
    {
      return;
    }
  }
}
void place(int point)
{
  if (point == 0)
  {
    //resume from here:??????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????//fuck u
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
void pause()
{
  analogWrite(2, 0);
  analogWrite(3, 0);
  analogWrite(9, 0);
  analogWrite(10, 0);
}
void two_ones()
{
  if ( l == 1 && r == 1)
  {
    forward();
  }
  else
  {
    return;
  }
}

