#include<SoftwareSerial.h>
SoftwareSerial bluetooth(11, 10);
char a;
String data;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  bluetooth.begin(9600);


  bluetooth.println("Hello World!!");
}


void loop() {
  while (Serial.available() > 0)
  {

    char dataChar = Serial.read();
    if (dataChar != '\n') {
      data += dataChar;
    }
    else {
      bluetooth.println(data);
      data = "";
    }
    //bluetooth.write(Serial.read());
    //bluetooth.write("\n");
    //a=Serial.read();
    //Serial.println(a);

  }

  while(bluetooth.available()>0)
{
  char dataChar1 = bluetooth.read();
  Serial.println(dataChar1);
}

}
