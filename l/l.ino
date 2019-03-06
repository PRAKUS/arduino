#include <SoftwareSerial.h>
SoftwareSerial my(11,10);

void setup() {
 pinMode(4,OUTPUT);
 pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
  pinMode(A0,OUTPUT);
  pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);}

void loop() {

 {digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(A0,LOW);
 }}

