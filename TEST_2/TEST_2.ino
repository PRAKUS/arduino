int trig=8;
int echo=7;
void setup() {
  pinMode(trig,OUTPUT);
pinMode(echo,INPUT);// put your setup code here, to run once:
pinMode(13,OUTPUT);
}

void loop() 
{
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW); 
delayMicroseconds(2);
long a=pulseIn(echo,HIGH);

a=a/58.2;
delay(5);
return a;


if( a<=20)
{
  digitalWrite(13,HIGH);
  }
  
  else
  {
    digitalWrite(13,LOW)
    ;
  // put your main code here, to run repeatedly:
}
}


