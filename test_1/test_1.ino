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
  pick(x);
  x++;
  origin(y);
  y++;
  c = readcolor();
  p = place(z, c);
  if ( p == 1)
    z++;
  d = back(w, c);
  if ( d == 1)
    w++;
}
void readsensor()
{
  
}
void pick(int point)
{
  
}
void origin(int point)
{
  
}
int readcolor()
{
  
}
int place(int point,int color)
{
  
}
int back(int point, int color)
{
  
}






