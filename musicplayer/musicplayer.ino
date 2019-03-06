void setup() {Serial.begin(9600);
 
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(0,INPUT);
pinMode(1,INPUT);
pinMode(2,INPUT);
pinMode(3,INPUT);

  // put your setup code here, to run once:

}

void loop() {
  int a=digitalRead(0);
  int b=digitalRead(1);int c=digitalRead(3);
  int d=digitalRead(2);
  if (a==HIGH)
  {
    digitalWrite(10,HIGH);
    Serial.print("a=");
     Serial.print(a);
  }
  else 
  {
     digitalWrite(10,LOW);
  }
   if (b==HIGH)
  {
    digitalWrite(9,HIGH);
    
  }
  else 
  {
     digitalWrite(9,LOW);
  }
   if (c==HIGH)
  {
    digitalWrite(11,HIGH);
    
  }
  else 
  {
     digitalWrite(11,LOW);
  }
   if (d==HIGH)
  {
    digitalWrite(12,HIGH);
    
  }
  else 
  {
     digitalWrite(12,LOW);
  }
  
  
  // put your main code here, to run repeatedly:

}
