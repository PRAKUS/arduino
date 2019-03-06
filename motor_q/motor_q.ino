int trig=7;
int echo=8;

void setup() 
{
pinMode(7,INPUT);
pinMode(8,OUTPUT);

pinMode(4,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(A0,OUTPUT);

}

void loop()
{
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
    digitalWrite(trig,LOW);
  delayMicroseconds(2);
  long a=pulseIn(echo,HIGH);
  int b=(a/58.2);
  if (b<=10)
  {
    digitalWrite(4,HIGH);
    digitalWrite(2,LOW);
 
    digitalWrite(3,LOW);
    digitalWrite(A0,HIGH);
    }
    else
  {
    digitalWrite(4,LOW);
    digitalWrite(2,HIGH);
     digitalWrite(3,LOW);
    digitalWrite(A0,HIGH);
    }

}
