#include <SoftwareSerial.h>
SoftwareSerial mygsm(9,10);
char gsmread;

void setup() {mygsm.begin(9600);
Serial.begin(9600);  // put your setup code here, to run once:

}

void loop()
{
if (Serial.available()>0)
{
  switch(Serial.read())
  {
    case 'r':sendmessage();
    break;
    case 's':Recivedmessage();
    break;
    case't':call();
    break;
  }
}
}


void call()
{
  mygsm.println("AT\r\n");//nitalization for calling 
  delay(1000);

  mygsm.println("ATD_NUMBER");//calling the number
  delay(1000);
}
void sendmessage()
{mygsm.println("AT+CMGF=1"); //Sets the gsm module in text mode
 delay(1000);
 mygsm.println("AT+CMGS=\"NUMBER\"\r");//repalce number with number you want to send text
 delay(1000);
 mygsm.println("your message");
 delay(100);
 mygsm.println((char)26);//ascii code of cntrl+z
 delay(1000);
 
  }

void Recivedmessage()
{
  mygsm.println("AT+CNMT=2,2,0,0,0");
  delay(1000);
}



void perfrom()
{
  if (mygsm.available()>0)
  {
    gsmread=mygsm.read();
    
  if(gsmread=='#')
  {
    delay(10);
    gsmread=mygsm.read();
    if(gsmread=='a')
    {
      delay(10);
     gsmread= mygsm.read();
      if(gsmread=='1')
      {
        digitalWrite(13,HIGH);
      }
      else 
      {
        digitalWrite(13,LOW);
      }
    }
  }
  }
}

