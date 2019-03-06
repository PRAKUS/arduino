
int b=20500;
void setup() {
 Serial.begin(9600); // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
}
void loop() {
  int a=analogRead(A0);
  int b=analogRead(A1);
int c=analogRead(A2);
Serial.println("a=");
Serial.print(a);
delay(500);
Serial.println("b=");
Serial.print(b);
delay(500);
Serial.println("c=");
Serial.print(c);
delay(500);}


