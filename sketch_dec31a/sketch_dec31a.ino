void setup() 
 {pinMode(8,INPUT);pinMode(11,INPUT);pinMode(10,INPUT);
 pinMode(4,OUTPUT);pinMode(2,OUTPUT);pinMode(3,OUTPUT);pinMode(A0,OUTPUT);
 }

void loop() 
{
int a=digitalRead(8);
int b=digitalRead(11);
int c=digitalRead(10);

if (a==HIGH&&b==LOW&&c==LOW)
{
  Serial.println("left");
}
if (a==LOW&&b==HIGH&&c==LOW)
{
  Serial.println("RIGHT");
}
if( a==LOW && b==LOW && c==HIGH)
{
  Serial.println("FORWARD");
}
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

