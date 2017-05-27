int a,b;
void setup() {
  // put your setup code here, to run once:
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(3,INPUT);
  pinMode(2,INPUT);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   a=digitalRead(4);
   b=digitalRead(2);
  Serial.print(a);
  Serial.println(b);

}
