#include <SoftwareSerial.h>
SoftwareSerial blue(11,10);
int echo=7;int trig=8;

float b;
void setup() {
Serial.begin(9600);
pinMode(4,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(A0,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,INPUT);
pinMode(8,OUTPUT);}
void loop()
{
  
long a=pulseIn(echo,HIGH);
b=a/58.2;
delay(5);
Serial.println("hunter");
Serial.print(b);

}
