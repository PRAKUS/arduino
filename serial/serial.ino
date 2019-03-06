

int i=0;
void setup() {
Serial.begin(9600);  // put your setup code here, to run once:
pinMode(2,INPUT);// door open switch of  1st floor 
pinMode(3,INPUT);// door open switch  of 2nd floor
pinMode(4,INPUT);// door open switch of 3rd floor
pinMode(5,INPUT);// 1ST FLOOR SWITCH;" THINK IT IS INSIDE THE LIFT"
pinMode(6,INPUT);//2ND FLOOR SWITCH
pinMode(7,INPUT);// 3RD FLOOR SWITCH


}

void loop() 
{
int osw1= digitalRead(2);// oudside switch
int osw2=digitalRead(3);
int osw3=digitalRead(4);
int isw1=digitalRead(5);// inside switch
int isw2=digitalRead(6);
int isw3=digitalRead(7);

if (isw1==LOW)
{
  for (int x=1; x<160;x++)
  {
    Serial.println("1st floor");
    i++;
    Serial.print(i);
  }
}
if (isw2==LOW)
{
  for (int x=1;x<40;x++)
  {
    Serial.println("2nd floor");
    delay(1000);
        
  }
}
  if (isw3==LOW)
{
  for (int x=1;x<120;x++)
  {
    Serial.println("3rd floor");
    
  }
}



}



