int Pin13 = 13;
int delayPeriod = 200;
int num = 0;

void setup() 
{
    pinMode(Pin13, OUTPUT);
}

void loop()
{
  digitalWrite(Pin13, HIGH);
  delay(delayPeriod);
  digitalWrite(Pin13, LOW);
  delay(delayPeriod);
  num++;
  if(num == 20)
    {
      num = 0;
      delay(3000);
    }
}
