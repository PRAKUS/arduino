int trig=7;
int echo=8;
float b;
void setup() 
{
 Serial.begin(9600);pinMode(7,INPUT);pinMode(8,OUTPUT);

}

void loop() {
 digitalWrite(echo,HIGH);
delayMicroseconds(10);
digitalWrite(echo,LOW); 
delayMicroseconds(2);
long a=pulseIn(trig,HIGH);
b=a/58.2;
delay(500);
Serial.println("hunter");
Serial.print(b);

}
