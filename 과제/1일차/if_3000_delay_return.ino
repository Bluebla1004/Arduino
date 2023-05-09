int Pin13 = 13;
int delayPeriod = 500;

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

    delayPeriod = delayPeriod + 100;

    if(delayPeriod >= 3000)
      {
           delayPeriod = 500;
      }
}
