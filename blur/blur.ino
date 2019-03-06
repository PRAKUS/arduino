#include <SoftwareSerial.h>

SoftwareSerial blue(11,10);
int trig=7;
int echo=8;
float b;
char a;
void setup() {Serial.begin(9600);
blue.begin(9600);
 pinMode(4,OUTPUT);
 pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
  pinMode(A0,OUTPUT);
  pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(8,OUTPUT);
    pinMode(7,INPUT);}

void loop() {
    pulse();

  
if (blue.available())
{
  a =blue.read();

Serial.print(a);

 
 
 if (a=='B')
 {digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(A0,LOW);

 
 }
 if (a=='F')
 {
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  
  digitalWrite(4,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(A0,HIGH);

}
if (a=='R')
 {
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(A0,LOW);
 }
 if (a=='L')
 {
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(A0,HIGH);
 }
 if (a=='S')
 {
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(4,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(A0,LOW);
 }
}
}
void pulse()
{
  digitalWrite(echo,HIGH);
delayMicroseconds(10);
digitalWrite(echo,LOW); 
delayMicroseconds(2);
long a=pulseIn(trig,HIGH);
b=a/58.2;
Serial.println("hunter");
Serial.print(b);
}

