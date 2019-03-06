
void setup() {
Serial.begin(9600);  // put your setup code here, to run once:
pinMode(3,OUTPUT);
}

void loop()
{
if (Serial.available())
{
  Serial.write(3);
}
}
