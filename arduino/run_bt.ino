//蓝牙驱动电机
int run1 = 9;
int run2 = 10;
//int runSpeed = 11;
int tmp;

void setup()
{
    Serial.begin(9600);
    pinMode(run1,OUTPUT);
    pinMode(run2,OUTPUT);
//    pinMode(runSpeed,OUTPUT);
}
void loop()
{
   tmp = Serial.read();
   if(tmp == '1'){
    digitalWrite(run1,HIGH);
    digitalWrite(run2,LOW);
    analogWrite(runSpeed,100);
    Serial.println("go");
    delay(2000);
   }
    if(tmp == '2'){
    digitalWrite(run1,HIGH);
    digitalWrite(run2,LOW);
    analogWrite(runSpeed,200);
    Serial.println("go");
    delay(2000);
   }
   if(tmp == '0'){
    digitalWrite(run1,HIGH);
    digitalWrite(run2,HIGH);
    Serial.println("stop");
    delay(2000);
   }
        
}
