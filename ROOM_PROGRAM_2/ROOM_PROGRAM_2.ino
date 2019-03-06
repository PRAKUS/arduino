char a;
void setup() {
 Serial.begin(9600);
  pinMode(13,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(A0,INPUT);

}

void loop()
{
if (Serial.available())
a=Serial.read();
Serial.println(a);
int b=analogRead(A0);Serial.println(b);
if (a=='1' || b>=500)
{
  digitalWrite(13,HIGH);
  digitalWrite(11,LOW);
}
if(a=='2' || b<=499)
{
  digitalWrite(13,LOW);
  digitalWrite(11,HIGH);
}
}

