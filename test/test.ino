
void setup() {Serial.begin(9600);
  pinMode(12,INPUT);
  pinMode(13,INPUT);
    pinMode(5,INPUT);
  pinMode(6,INPUT);
}

void loop() 
{
int a=digitalRead(12);
int b=digitalRead(13);
if (a==LOW)
{
  Serial.println("HIGH1_LOW ") ; 
  digitalWrite(5,LOW);
}
else if (a==HIGH)
{
  Serial.println("HIGH1_HIGH") ;  
  digitalWrite(5,HIGH); 
}
if (b==LOW)
{
  Serial.println("HIGH2_LOW") ; 
  digitalWrite(6,LOW);
}
else if (b==HIGH)
{
  Serial.println("HIGH2_HIGH") ;  
  digitalWrite(6,HIGH); 
}
}
