void setup() {Serial.begin(9600);
pinMode(A3,INPUT);
// put your setup code here, to run once:

}

void loop() {
 int a=analogRead(A3);// put your main code here, to run repeatedly:
Serial.println(a);
}
