int Pin11 = 11;
int Pin10 = 10;
int Pin9 = 9;
int delayPeriod = 1;

void setup() 
{
    pinMode(Pin11, OUTPUT);
    pinMode(Pin10, OUTPUT);
    pinMode(Pin9, OUTPUT);
}


// delayPeriod의 초기값은 500이며
// 루프를 한번 돌때마다 100씩 추가되며
// delayPeriod이가 3000이거나 높을경우 delayPeriod를 100으로 리셋
void loop() 
{   
    digitalWrite(Pin9, LOW); 
    digitalWrite(Pin11, HIGH);   
    delay(delayPeriod);         
    digitalWrite(Pin11, LOW);  
    digitalWrite(Pin10, HIGH);   
    delay(delayPeriod);        
    digitalWrite(Pin10, LOW);   
    digitalWrite(Pin9, HIGH);   
    delay(delayPeriod);     
    delayPeriod = delayPeriod + 1;
    if(delayPeriod >= 2000)
      {
           delayPeriod = 1;
      }
}
