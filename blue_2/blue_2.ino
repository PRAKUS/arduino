char a;
void setup() {Serial.begin(9600);
 pinMode(13,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(6,OUTPUT);

    }

void loop() {

  
if (Serial.available())
{
  a =Serial.read();

 Serial.println(a);

 
 
 if (a=='1')
 {digitalWrite(13,HIGH);
 
 
 }
 if (a=='2')
 {
  digitalWrite(13,LOW);
 }
if (a=='3')
 {
  digitalWrite(12,HIGH);
 }
 if (a=='4')
 {
   digitalWrite(12,LOW);
 }
  if (a=='5')
 {digitalWrite(11,HIGH);
 
 
 }
 if (a=='6')
 {
  digitalWrite(11,LOW);
 }

}
}
