int Pin13 = 13;
int delayPeriod = 200;
int num = 0;

void setup() 
{
    pinMode(Pin13, OUTPUT);
}

void loop() 
{
   for(num; num<20; num++)
       {
        digitalWrite(Pin13, HIGH);   
        delay(delayPeriod);              
        digitalWrite(Pin13, LOW); 
        delay(delayPeriod);
       }
     delay(3000);
}
