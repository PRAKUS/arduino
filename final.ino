#include <SoftwareSerial.h>
#include <TinyGPS++.h>
#include <LiquidCrystal.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#define ONE_WIRE_BUS 2
const int rs = 12, en = A1, d4 =A5, d5 =A4, d6 =A3, d7 = A2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
TinyGPSPlus gps;
SoftwareSerial ss(8,9);
SoftwareSerial Gsm(10,11);
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature tempsensors(&oneWire);
int clearer=1;
int limitSwitch=7;
int MQ3=A0;
int flag=1;
int flag1=1;
int buzzer=13;
int led=6;
void setup() 
  {
       Serial.begin(9600);
       lcd.begin(16, 2);                         
       ss.begin(9600);
       Gsm.begin(9600);
       pinMode(limitSwitch,INPUT);
       pinMode(MQ3,INPUT);
       pinMode(led,OUTPUT);
       lcd.clear();
       lcd.setCursor(0,0);
       lcd.print("ACCIDENT INFORMATION");
       lcd.setCursor(0,1);
       lcd.print("SYSTEM....");
       delay(5000);
       tempsensors.begin();
       lcd.clear();
       
      // pinMode(,OUTPUT);

  }

//*******************************ALCHOL SENSOR FUNCTION*******************************  
float AlcholSensor()
    {
      float adcValue=0;
      for(int i=0;i<10;i++)
        {
          adcValue+= analogRead(MQ3);
          delay(10);
        }
       float v= (adcValue/10) * (5.0/1024.0);
       float mgL= 0.67 * v;
       return mgL;
    }
//**********************************LED BLINKINNG************************************    
void blinking()
{
  digitalWrite(led,HIGH);
  delay(100);
  digitalWrite(led,LOW);
  delay(100);
} 
//***********************************SMS SENDING FUNCTION****************************   
void Sms(String number,String text)
{
    Gsm.println("AT+CMGF=1"); 
    delay(1000);  
    Gsm.print("AT+CMGS=");
    Gsm.print('"');
    Gsm.print(number);
    Gsm.println('"');
    delay(1000);
    Gsm.print(text);
    delay(100);
    Gsm.println((char)26);
    delay(5000);
    

}
//*******************************main Function**********************************
void loop() {
int sensor=digitalRead(limitSwitch);
//Serial.println(AlcholSensor());
float alcholSensor=AlcholSensor();
ss.listen();
delay(100);
while(ss.available()>0)
   {
    if(gps.encode(ss.read()))
      {
        Serial.print(F("Location: "));
        lcd.setCursor(1,0); 
        if (gps.location.isValid())
            { 
               String lati= String(gps.location.lat());
               String logn=String(gps.location.lng());
               Serial.print(lati);
               Serial.print(",");
               Serial.println(logn);
               lcd.setCursor(2,0);
               lcd.print("SYSTEM");
               lcd.setCursor(2,1);
               lcd.print("ONLINE"); 
               if(alcholSensor>=0.8 && flag1==1)
                {
                  String text="Driver Is Drunken. He is in this loacation.\nwww.google.com.ph/maps/search/?api=1&query="+lati+","+logn;
                  String number="+919952267492";
                  Sms(number,text);
                  flag1=0;
                }
               if (sensor==0) 
                {
                  lcd.clear();
                  lcd.setCursor(0,0);
                  lcd.print("ACCIDENT");
                  lcd.setCursor(0,1);
                  lcd.print("OCCUR");
                  lcd.clear();
                  tone(buzzer,1000);
                  if(flag==1)
                    {
                      Gsm.listen();
                      delay(500);
                      blinking();
                      String AdminText="Driver Is Drunken. He is in this loacation.\nwww.google.com.ph/maps/search/?api=1&query="+lati+","+logn;
                      String FamilyText="Driver Is Drunken. He is in this loacation.\nwww.google.com.ph/maps/search/?api=1&query="+lati+","+logn;
                      String HospitalText="Driver Is Drunken. He is in this loacation.\nwww.google.com.ph/maps/search/?api=1&query="+lati+","+logn; 
                      Serial.println("Text Sending....");
                      Sms("+919952267492",AdminText);
                      blinking();
                      delay(500);
                      Sms("+919952267492",FamilyText);
                      blinking();
                      delay(500);
                      Sms("+919952267492",HospitalText);
                      delay(100);
                      Serial.println("Texts Send");
                      blinking();
                      flag1=1;
                      flag=0;
                                        
                    }
                     noTone(buzzer); 
                }
                
            }

        else
            {
              Serial.println(F("INVALID"));
              lcd.clear();
              lcd.setCursor(1,0);
              lcd.print("SYSTEM NOT");
              lcd.setCursor(3,1);
              lcd.print("READY"); 
              delay(1000);
              lcd.clear(); 
            }
          tempsensors.requestTemperatures();
          float tempC = tempsensors.getTempCByIndex(0);
          Serial.println(tempC); 
          if (tempC >35)
          {
            tone(buzzer,2000);
            lcd.setCursor(9,0);
            lcd.print("TEMP");
            lcd.setCursor(9,1);
            lcd.print("HIGH");
            delay(100);
            clearer=1;
          }
          if (tempC<35 && clearer==1)
          {
            lcd.clear();
            clearer=0;
           }
          noTone(buzzer);        
                
    }
  
 }

} 
