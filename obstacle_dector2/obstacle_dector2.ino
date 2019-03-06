int trig=8;
int echo=7;
int i=2000;
long b;
void setup() {
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
Serial.begin(9600);
pinMode(5,OUTPUT);
pinMode(4,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(A0,OUTPUT);
}


void loop() 
{
  b=distance();
  if (b>=20)
  {
  forward();
  }
  if(b<20)
  {
for    (i=0;i<=2000;i++)
   left();
  delay(1000);
  for(i=0;i<=2000;i++)
  forward();
  delay(1000);  
  }
 if(25<b>20)
  {
  for(i=0;i<=2000;i++)
  right();
  delay(1000);
  for(i=0;i<=2000;i++)
  forward();
  delay(1000);
  }
  if(26<b>20)
{
  for(i=0;i<=2000;i++)
  right();
  delay(1000);
  for(i=0;i<=2000;i++)
  forward();
  delay(1000);
  
}

}


long distance()
{
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW); 
delayMicroseconds(2);
long x=pulseIn(echo,HIGH);
Serial.print("x=");
Serial.print(x/58.2);
x=a/58.2;
delay(5);
return x;
}

void forward()
{
  digitalWrite(4, HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(A0,LOW);
}

void reverse()
{
  digitalWrite(4,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(A0,HIGH);
}

void left()
{
  digitalWrite(4,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(A0,LOW);
}

void right()
{
  digitalWrite(4, HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(A0,LOW);
}
