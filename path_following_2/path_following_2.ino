int x = 0;
int y = 0;
int z = 0;
int w = 0;
int p; // placing function arguments
int d; // backing function arguments
int c; // color reading
int l;
int r;
int l_frontpin = 2;
int l_backpin = 3;
int r_frontpin = 9;
int r_backpin = 10;
int l_ir = 4;
int r_ir = 5;
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);

}
void loop()
{
  readsensor();
  pick(x, c);
  x++;
  origin(y);
  y++;
  c = readcolor();
  p = place(z, c);
  if ( p == 1)
  {
    z++;
  }
  d = back(w, c);
  if ( d == 1)
  {
    w++;
  }
}
void pick(int point, int color)
{
  int object = 0;
  int count = 0;
  if (point == 0)
  {
    if (l == 0 && r == 0 && count == 0)
    {
      forward();
      delay(300);
      count++;
    }
    two_ones();
    if (l == 0 && r == 0 && count == 1)
    {
      forward();
      delay(300);
      count++;
    }
    //////////////////////////////////////////////////////////////////////////////////////////////////////////// powering up  ultrasonic sensor
    object = two_ones();
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////  powering off the ultrasonic sensor
    if (l == 0 && r == 0 && count == 2 && object == 1)
    {
      pause();
      return;
    }
  }
  if (point == 1)
  {
    if (l == 0 && r == 0 && count == 0 && color == 1)
    {
      left();
      delay(300);
      count++;
    }
    if (l == 0 && r == 0 && count == 0 && color == 0)
    {
      right();
      delay(300);
      count++;
    }
    two_ones();
    if (l == 0 && r == 0 && count == 1)
    {
      forward();
      delay(300);
      count++;
    }
    two_ones();
    if (l == 0 && r == 0 && count == 2)
    {
      right();
      delay(300);
      count++;
    }
    //////////////////////////////////////////////////////////////////////////////////////////////////////////// powering up  ultrasonic sensor
    object = two_ones();
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////  powering off the ultrasonic sensor
    if (l == 0 && r == 0 && count == 3 && object == 1)
    {
      pause();
      return;
    }
  }
  if (point == 2)
  {
    if (l == 0 && r == 0 && count == 0 && color == 1)
    {
      left();
      delay(300);
      count++;
    }
    if (l == 0 && r == 0 && count == 0 && color == 0)
    {
      right();
      delay(300);
      count++;
    }
    two_ones();
    if (l == 0 && r == 0 && count == 1)
    {
      forward();
      delay(300);
      count++;
    }
    two_ones();
    if (l == 0 && r == 0 && count == 2)
    {
      left();
      delay(300);
      count++;
    }
    //////////////////////////////////////////////////////////////////////////////////////////////////////////// powering up  ultrasonic sensor
    object = two_ones();
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////  powering off the ultrasonic sensor
    if (l == 0 && r == 0 && count == 3 && object == 1)
    {
      pause();
      return;
    }
  }
  if (point == 3)
  {
    if (l == 0 && r == 0 && count == 0 && color == 1)
    {
      left();
      delay(300);
      count++;
    }
    if (l == 0 && r == 0 && count == 0 && color == 0)
    {
      right();
      delay(300);
      count++;
    }
    two_ones();
    if (l == 0 && r == 0 && count == 1)
    {
      forward();
      delay(300);
      count++;
    }
    two_ones();
    if (l == 0 && r == 0 && count == 2)
    {
      forward();
      delay(300);
      count++;
    }
    //////////////////////////////////////////////////////////////////////////////////////////////////////////// powering up  ultrasonic sensor
    object = two_ones();
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////  powering off the ultrasonic sensor
    if (l == 0 && r == 0 && count == 3 && object == 1)
    {
      pause();
      return;
    }
  }
  if (point == 4)
  {
    if (l == 0 && r == 0 && count == 0 && color == 1)
    {
      left();
      delay(300);
      count++;
    }
    if (l == 0 && r == 0 && count == 0 && color == 0)
    {
      right();
      delay(300);
      count++;
    }
    two_ones();
    if (l == 0 && r == 0 && count == 1)
    {
      forward();
      delay(300);
      count++;
    }
    two_ones();
    if (l == 0 && r == 0 && count == 2)
    {
      forward();
      delay(300);
      count++;
    }
    two_ones();
    if (l == 0 && r == 0 && count == 3)
    {
      right();
      delay(300);
      count++;
    }
    //////////////////////////////////////////////////////////////////////////////////////////////////////////// powering up  ultrasonic sensor
    object = two_ones();
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////  powering off the ultrasonic sensor
    if (l == 0 && r == 0 && count == 4 && object == 1)
    {
      pause();
      return;
    }
  }
  if (point == 5)
  {
    if (l == 0 && r == 0 && count == 0 && color == 1)
    {
      left();
      delay(300);
      count++;
    }
    if (l == 0 && r == 0 && count == 0 && color == 0)
    {
      right();
      delay(300);
      count++;
    }
    two_ones();
    if (l == 0 && r == 0 && count == 1)
    {
      forward();
      delay(300);
      count++;
    }
    two_ones();
    if (l == 0 && r == 0 && count == 2)
    {
      forward();
      delay(300);
      count++;
    }
    two_ones();
    if (l == 0 && r == 0 && count == 3)
    {
      left();
      delay(300);
      count++;
    }
    //////////////////////////////////////////////////////////////////////////////////////////////////////////// powering up  ultrasonic sensor
    object = two_ones();
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////  powering off the ultrasonic sensor
    if (l == 0 && r == 0 && count == 4 && object == 1)
    {
      pause();
      return;
    }
  }


}
void origin(int point)
{
  int count = 0;
  if (point == 0)
  {
    if (l == 0 && r == 0 && count == 0)
    {
      Uturn();
      delay(2000);
      count++;
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 1)
    {
      forward();
      count++;
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 2)
    {
      pause();
      return;
    }
  }
  if (point == 1)
  {
    if (l == 0 && r == 0 && count == 0)
    {
      Uturn();
      delay(2000);
      count++;
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 1)
    {
      left();
      delay(300);
      count++;
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 2)
    {
      forward();
      count++;
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 3)
    {
      pause();
      return;
    }
  }
  if (point == 2)
  {
    if (l == 0 && r == 0 && count == 0)
    {
      Uturn();
      delay(2000);
      count++;
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 1)
    {
      right();
      delay(300);
      count++;
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 2)
    {
      forward();
      count++;
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 3)
    {
      pause();
      return;
    }
  }
  if (point == 3)
  {
    if (l == 0 && r == 0 && count == 0)
    {
      Uturn();
      delay(2000);
      count++;
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 1)
    {
      forward();
      count++;
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 2)
    {
      forward();
      count++;
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 3)
    {
      pause();
      return;
    }
  }
  if (point == 4)
  {
    if (l == 0 && r == 0 && count == 0)
    {
      Uturn();
      delay(2000);
      count++;
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 1)
    {
      left();
      delay(300);
      count++;
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 2)
    {
      forward();
      count++;
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 3)
    {
      forward();
      count++;
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 4)
    {
      pause();
      return;
    }
  }
  if (point == 5)
  {
    if (l == 0 && r == 0 && count == 0)
    {
      Uturn();
      delay(2000);
      count++;
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 1)
    {
      right();
      delay(300);
      count++;
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 2)
    {
      forward();
      count++;
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 3)
    {
      forward();
      count++;
    }
    two_ones();
    if ( l == 0 && r == 0 && count == 4)
    {
      pause();
      return;
    }
  }
}
int place(int point, int color)
{
  /////////////////////////////////////////////////////////////////////////////////////////////// powering up  the color sensor
  int count = 0;
  if ( color == 1)
  {
    if (point == 0)
    {
      if (l == 0 && r == 0 && count == 0)
      {
        right();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 1)
      {
        forward();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 2)
      {
        right();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 3)
      {
        forward();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 4)
      {
        Uturn;
        delay(100);
        drop();
        return 1;
      }
    }
    if (point == 1)
    {
      if (l == 0 && r == 0 && count == 0)
      {
        right();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 1)
      {
        forward();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 2)
      {
        right();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 3)
      {
        forward();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 4)
      {
        RUturn();
        delay(100);
        drop();
        return 1;
      }
    }
    if (point == 2)
    {
      if (l == 0 && r == 0 && count == 0)
      {
        right();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 1)
      {
        forward();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 2)
      {
        right();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 3)
      {
        Uturn();
        delay(100);
        drop();
        return 1;
      }
    }
    if (point == 3)
    {
      if (l == 0 && r == 0 && count == 0)
      {
        right();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 1)
      {
        forward();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 2)
      {
        right();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 3)
      {
        RUturn();
        delay(100);
        drop();
        return 1;
      }
    }
    if (point == 4)
    {
      if (l == 0 && r == 0 && count == 0)
      {
        right();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 1)
      {
        forward();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 2)
      {
        forward();
        delay(300);
        RUturn();
        delay(200);
        drop();
        return 1;
      }

    }
    if (point == 5)
    {
      if (l == 0 && r == 0 && count == 0)
      {
        right();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 1)
      {
        forward();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 2)
      {
        forward();
        delay(300);
        RUturn();
        delay(800);
        drop();
        return 1;
      }

    }
  }
  else
  {
    if (l == 0 && r == 0 && count == 0 )
    {
      left();
      delay(300);
      count++;
    }
    two_ones();
    if (l == 0 && r == 0 && count == 1)
    {
      drop();
      pause();
    }
    return 0;
  }
}
int back(int point, int color)
{
  int count = 0;
  if ( color == 1)
  {
    if (point == 0)
    {
      Uturn();
      delay(200);
      count++;

      two_ones();
      if (l == 0 && r == 0 && count == 1)
      {
        forward();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 2)
      {
        left();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 3)
      {
        forward();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 4)
      {
        pause();
        return 1;
      }
    }
    if (point == 1)
    {
      RUturn();
      delay(200);
      count++;

      two_ones();
      if (l == 0 && r == 0 && count == 1)
      {
        forward();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 2)
      {
        left();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 3)
      {
        forward();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 4)
      {
        pause();
        return 1;
      }
    }
    if (point == 2)
    {
      Uturn();
      delay(200);
      count++;

      two_ones();
      if (l == 0 && r == 0 && count == 1)
      {
        left();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 2)
      {
        forward();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 3)
      {
        pause();
        return 1;
      }
    }
    if (point == 3)
    {
      RUturn();
      delay(200);
      count++;

      two_ones();
      if (l == 0 && r == 0 && count == 1)
      {
        left();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 2)
      {
        forward();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 3)
      {
        pause();
        return 1;
      }
    }
    if (point == 4)
    {
      RUturn();
      delay(800);
      count++;

      two_ones();
      if (l == 0 && r == 0 && count == 1)
      {
        forward();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 2)
      {
        pause();
        return 1;
      }
    }
    if (point == 5)
    {
      RUturn();
      delay(200);
      count++;

      two_ones();
      if (l == 0 && r == 0 && count == 1)
      {
        forward();
        delay(300);
        count++;
      }
      two_ones();
      if (l == 0 && r == 0 && count == 2)
      {
        pause();
        return 1;
      }
    }
  }
  else
  {
    if ( l == 0 && r == 0 && count == 0)
    {
      Uturn();
      delay(1000);
      count++;
    }
    two_ones();
    if (l == 0 && r == 0 && count == 1)
    {
      pause();
    }
    return 0;

  }

}
int two_ones()
{
  while (true)
  {
    readsensor();
    if (l == 1 && r == 1)
    {
      forward();
    }
    if (l == 1 && r == 0 )
    {
      right();
    }
    if (l == 1 && r == 0 )
    {
      left();
    }
    if (l == 0 && r == 0 )
    {
      return 1;
    }
    ////////////////////////////////////////////////////////////////////////////////////block and color sensing and gripper action in if case if ultrasonic sensor gets req output //
  }
}
void readsensor()
{
  l = digitalRead(4);
  r = digitalRead(5);
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
  analogWrite(2, 0);
  analogWrite(3, 200);
  analogWrite(9, 200);
  analogWrite(10, 0);
}
void RUturn()
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
int readcolor()
{

}
void drop()
{

}

