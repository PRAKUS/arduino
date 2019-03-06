
void setup() {
  pinMode(4,OUTPUT);// put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);// put your setup code here, to run once:
pinMode(A0,OUTPUT);
pinMode(7,INPUT);// put your setup code here, to run once:
pinMode(8,INPUT);
pinMode(11,INPUT);// put your setup code here, to run once:
pinMode(10,INPUT);

}

void loop() {
  int m=digitalRead(7);
    int m1=digitalRead(8);
      int m2=digitalRead(11);
        int m3=digitalRead(10);
  
  if (m==HIGH)
  {
    digitalWrite(4,HIGH);
  }
else 
{
  digitalWrite(4,LOW);
  }
  
  if (m1==HIGH)
  {
    digitalWrite(2,HIGH);
  }
else 
{
  digitalWrite(2,LOW);
  }
    
  if (m2==HIGH)
  {
    digitalWrite(3,HIGH);
  }
else 
{
  digitalWrite(3,LOW);
  }
    
  if (m3==HIGH)
  {
    digitalWrite(A0,HIGH);
  }
else 
{
  digitalWrite(A0,LOW);
  }
  


}
