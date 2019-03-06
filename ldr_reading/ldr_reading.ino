void setup() {
  Serial.begin(19200);
pinMode(A5,INPUT);  // put your setup code here, to run once:

}

void loop() {
  int a=analogRead(A5);
  Serial.println(a);
  delay(100);
  
}
