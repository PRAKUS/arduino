int trig=5;
int echo=4;
long y;
void setup() {Serial.begin(9600);
  // put your setup code here, to run once:
 pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
pinMode(13,OUTPUT); pinMode(A0,INPUT);
}

void loop() { 
  y=distance();int b=analogRead(A0); 
  Serial.print("b="); Serial.print(b);
  if(b==700)
  {
  if (y<200)
 {
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  }
  else{digitalWrite(13,LOW);
    
  }
}
}
  long distance()
{
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW); 
delayMicroseconds(2);
long x=pulseIn(echo,HIGH);
Serial.print("x=\n");
Serial.print(x/58.2);
x=x/58.2;
delay(5);
return x;
}
  // put your main code here, to run repeatedly:


