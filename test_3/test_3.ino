#include<SoftwareSerial.h>
SoftwareSerial bluetooth(11, 10);
char a;
char flag, flag1;

void setup() {
  pinMode(A0, INPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  bluetooth.begin(9600);
  Serial.begin(9600);// put your setup code here, to run once:


}

void loop() {

  int b = analogRead(A0); // put your main code here, to run repeatedly:
  int c = b / 100;
  if (bluetooth.available())
    a = bluetooth.read();
  Serial.println(a);
  //Serial.print(c);

 
    if (c > 6 )
    {
      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
      if (flag == 0) 
      {
        bluetooth.println('o');
        flag = 1;
        flag1=0;
      }
    }

   

    
    if (c < 5)
    {
      digitalWrite(12, HIGH);
      digitalWrite(13, LOW);
      if (flag1 == 0) 
      {
        bluetooth.println('g');
        flag1 = 1;
        flag=0;
      }

    }

  
}

