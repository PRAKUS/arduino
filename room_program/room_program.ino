
#include<SoftwareSerial.h>
#include <dht.h>
SoftwareSerial bluetooth(11,10);
dht DHT;
#define DHT11_PIN 8
char a;
char flag,flag1,flag2;
void setup() 
   {
    Serial.begin(9600);
    bluetooth.begin(9600);
    pinMode(7,OUTPUT);
    pinMode(6,OUTPUT);
    pinMode(A0,INPUT);
    pinMode(12,OUTPUT);
    pinMode(13,OUTPUT);
   

   }

void loop() 
{
 int b=analogRead(A0);
  DHT.read11(DHT11_PIN);
  int hum=DHT.humidity;
  int temp=DHT.temperature;
  Serial.print("temp=");  Serial.print(temp);
 int c=b/100;Serial.print(a);
 if (bluetooth.available())
    a =bluetooth.read();
    Serial.println(a);
    Serial.println(c);
    
 if (c>6 || a=='1')//NIGHT
    {
      digitalWrite(13,HIGH);
      digitalWrite(12,LOW);
      
   }
 if (a=='2' || c<5)//DAY
    {
       digitalWrite(13,LOW);
       digitalWrite(12,HIGH);
    }
 if (a=='3')
    {
       digitalWrite(1,HIGH);
    }
 if (a=='4')
   {
    digitalWrite(1,LOW);
   }
 if (a=='5' )
   {    
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    if (flag==0)
    {
      bluetooth.println('g');
     
     flag1=0;
    }  
    flag=1; 

    if (c<5)
    {
        digitalWrite(12,HIGH);
        if (flag1==0)
    {
      bluetooth.println('o');
     flag1=1; 
     flag=0;
    }  
  }
   }

   
}
 


 

 

