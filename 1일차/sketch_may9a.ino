int Pin13 = 13;
int Pin12 = 12;
int Pin11 = 11;
int Pin10 = 10;
int Pin9 = 9;
int delayPeriod = 500;

void setup() 
{
    pinMode(Pin13, OUTPUT);
    pinMode(Pin12, OUTPUT);
    pinMode(Pin11, OUTPUT);
    pinMode(Pin10, OUTPUT);
    pinMode(Pin9, OUTPUT);
}


// delayPeriod의 초기값은 500이며
// 루프를 한번 돌때마다 100씩 추가되며
// delayPeriod이가 3000이거나 높을경우 delayPeriod를 100으로 리셋
void loop() 
{
    digitalWrite(Pin13, HIGH);   
    digitalWrite(Pin12, HIGH);   
    digitalWrite(Pin11, HIGH);   
    digitalWrite(Pin10, HIGH);   
    digitalWrite(Pin9, HIGH);   
    delay(delayPeriod);          
    digitalWrite(Pin13, LOW);   
    digitalWrite(Pin12, LOW);   
    digitalWrite(Pin11, LOW);   
    digitalWrite(Pin10, LOW);   
    digitalWrite(Pin9, LOW); 
    delay(delayPeriod);
    delayPeriod = delayPeriod + 100;
    if(delayPeriod >= 3000)
      {
           delayPeriod = 100;
      }
}
