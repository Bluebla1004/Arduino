int Pin13 = 13;
int Pin12 = 12;
int Pin11 = 11;
int Pin10 = 10;
int Pin9 = 9;
int delayPeriod = 1;

void setup() 
{
    pinMode(Pin13, OUTPUT);
    pinMode(Pin12, OUTPUT);
    pinMode(Pin11, OUTPUT);
    pinMode(Pin10, OUTPUT);
    pinMode(Pin9, OUTPUT);
}

void loop() 
{
    digitalWrite(Pin9, LOW);  
    digitalWrite(Pin13, HIGH);   
    delay(delayPeriod);      
    digitalWrite(Pin13, LOW);   
    digitalWrite(Pin12, HIGH);   
    delay(delayPeriod);      
    digitalWrite(Pin12, LOW);   
    digitalWrite(Pin11, HIGH);   
    delay(delayPeriod);      
    digitalWrite(Pin11, LOW);   
    digitalWrite(Pin10, HIGH);  
    delay(delayPeriod);          
    digitalWrite(Pin10, LOW);  
    digitalWrite(Pin9, HIGH);
    delay(delayPeriod);           
    delayPeriod = delayPeriod + 1;
}
