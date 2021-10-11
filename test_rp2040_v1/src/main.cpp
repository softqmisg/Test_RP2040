#include <Arduino.h>

unsigned long pre_mili=0;
bool state=FALSE;
void setup() {
  // put your setup code here, to run once:
  Serial1.begin(115200);
  Serial1.println("hello world");
  pinMode(1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(millis()-pre_mili>1000)
  {
    if(state)
    {
      digitalWrite(1,LOW);
    }
    else
    {
      digitalWrite(1,HIGH);
    }
    per_mili=millis();
  }

}