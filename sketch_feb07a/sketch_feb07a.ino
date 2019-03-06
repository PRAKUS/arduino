void setup() {
  Serial.begin(9600);
  pinMode(A3,INPUT);
  pinMode(6,OUTPUT);
}

void loop() {
  {
   b= map (0,1023,0,255);
  }
  int a= analogRead(A3);
  Serial.println(a);
if(a<200)
{
digitalWrite(6,HIGH);
analogWrite(b,0,1023,0,255);

}
if(a>200)
{
  digitalWrite(6,LOW);
  analogWrite(b,0,1023,0,255);
}
}

