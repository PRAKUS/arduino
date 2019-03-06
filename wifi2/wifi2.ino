char a;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
 if (Serial.available())
 {
  
  Serial.println("AT");
  delay(1000);
  Serial.print("AT+CWMODE=3");// put your main code here, to run repeatedly:
 }

}
