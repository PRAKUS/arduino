int trig=8;
int echo=7;
int i=2000;

void setup() {
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
Serial.begin(9600);

}
void loop() 
{
long b=distance();
Serial.println(b);
}
long distance()
{
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW); 
delayMicroseconds(2);
long a=pulseIn(echo,HIGH);
Serial.print("a=");
Serial.print(a/58.2);
a=a/58.2;
delay(5);
return a;
}

