
void setup() {
  Serial.begin(9600);// put your setup code here, to run once:
pinMode(2,INPUT);
}

void loop() {int i=0;
  int a =digitalRead(2);
  int b;
  Serial.println("b=");
  Serial.print(b);
 delay(200);
if (a==LOW)
{
  for (int x=1; x<160;x++)
  {
    Serial.println("1st floor");
    i++;
    Serial.println(i);
    if (i==20)
    {
    b=20;
    return b;
  }
  delay(500);
}

}
}
