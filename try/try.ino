void setup() {Serial.begin(9600);
  pinMode(6,OUTPUT);// put your setup code here, to run once:
pinMode(5,OUTPUT);
pinMode(4,OUTPUT);// put your setup code here, to run once:
pinMode(3,OUTPUT);// put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
}

void loop() 
{ 
  int a=analogRead(A0);
    int b=analogRead(A1);
      int c=analogRead(A2);
Serial.println(c);
if (a>=100 &&b<=100&&c>=100)
{
  forward();
  Serial.println("forward");
}
if (a>=100 &&b>=100&&c>=100)
{
  stop1();
  Serial.println("STOP");
}
if (a<=100 &&b>=100&&c>=100)
{
  left();
  Serial.println("LEFT");
}
if (a>=100 &&b>=100&&c<=100)
{
  right();
  Serial.println("RIGHT");
}
}
void forward()

{
digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
   digitalWrite(4,LOW);
    digitalWrite(3,HIGH);
}
void stop1()

{
digitalWrite(6,LOW);
  digitalWrite(5,LOW);
   digitalWrite(4,LOW);
    digitalWrite(3,LOW);
}
void left()

{
digitalWrite(6,LOW);
  digitalWrite(5,LOW);
   digitalWrite(4,LOW);
    digitalWrite(3,HIGH);
}
void right()

{
digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
   digitalWrite(4,LOW);
    digitalWrite(3,LOW);
}
