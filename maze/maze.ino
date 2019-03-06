#include <SoftwareSerial.h>

int trig0=47;
int echo0=46;
int trig1=49;
int echo1=48;
int trig2=51;
int echo2=50;
int i=2000;
int m1=29;
int m2=31;
int m3=8;
int m4=9;
long x;
long y;
long z;

void setup() {
pinMode(trig0,OUTPUT);
pinMode(echo0,INPUT);
pinMode(trig1,OUTPUT);
pinMode(echo1,INPUT);
pinMode(trig2,OUTPUT);
pinMode(echo2,INPUT);
Serial.begin(9600);
pinMode(5,OUTPUT);
pinMode(m2,OUTPUT);
pinMode(m1,OUTPUT);
pinMode(m3,OUTPUT);
pinMode(m4,OUTPUT);
}



void loop() 
{
  x=distance1();
  y=distance2();
  z=distance3();
if (x>=20&&y>=20&&z>=20)
{forward();
  Serial .println("foward");
}
if (x>=20&& y<=20&&z<=20)
{forward();
  Serial .println("forward");
}
if (x<=20&&y>=20&&z<=20)
{
 right(); Serial .println("right");
}
if (x<=20&& y>=20&&z>=20)
{right();
  Serial .println("right");
}
if (x<=20&&y<=20&&z>=20)
{
 left(); Serial .println("left");
}
if (x<=7&&y<=20&&z<=20)
{reverse();
  Serial .println("reverse");
}

}



long distance1()
{
digitalWrite(trig0,HIGH);
delayMicroseconds(10);
digitalWrite(trig0,LOW); 
delayMicroseconds(2);
long a=pulseIn(echo0,HIGH);

a=a/58.2;
delay(5);
return a;
}
long distance2()
{
digitalWrite(trig1,HIGH);
delayMicroseconds(10);
digitalWrite(trig1,LOW); 
delayMicroseconds(2);
long b=pulseIn(echo1,HIGH);


b=b/58.2;
delay(5);
return b;
}
long distance3()
{
digitalWrite(trig2,HIGH);
delayMicroseconds(10);
digitalWrite(trig2,LOW); 
delayMicroseconds(2);
long c=pulseIn(echo2,HIGH);


c=c/58.2;
delay(5);
return c;
}
void forward()
{
  digitalWrite(m1, HIGH);
  digitalWrite(m2,LOW);
  digitalWrite(m3,HIGH);
  digitalWrite(m4,LOW);
}

void reverse()
{
  digitalWrite(m1,LOW);
  digitalWrite(m2,HIGH);
  digitalWrite(m3,LOW);
  digitalWrite(m4,HIGH);
}

void left()
{
  digitalWrite(m1,LOW);
  digitalWrite(m2,LOW);
  digitalWrite(m3,HIGH);
  digitalWrite(m4,LOW);
}

void right()
{
  digitalWrite(m1, HIGH);
  digitalWrite(m2,LOW);
  digitalWrite(m3,LOW);
  digitalWrite(m4,LOW);
}
void stop1()
{
  digitalWrite(m1, LOW);
  digitalWrite(m2,LOW);
  digitalWrite(m3,LOW);
  digitalWrite(m4,LOW);
}
