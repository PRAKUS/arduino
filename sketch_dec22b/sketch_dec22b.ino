int trig=7;


void setup() 
{
pinMode(7,INPUT);


pinMode(4,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(A0,OUTPUT);

}

void loop()
{
 int b=digitalRead(trig);
  
  if (b==LOW)
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
     digitalWrite(3,HIGH);
    digitalWrite(A0,LOW);
    }

}
