void setup()
{ 
pinMode(12,INPUT);
pinMode(13,OUTPUT);
 

}

void loop() {
  int a=digitalRead(12);
  if(a==HIGH)
  {
    digitalWrite(13,HIGH);
  }
if(a==LOW)
  {
    digitalWrite(13,LOW);
  }
    
  


}
