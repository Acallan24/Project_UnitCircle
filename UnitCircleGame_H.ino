char a=0;
const int led=13;

#include <Wire.h>

void setup() {
Serial.begin(9600);
pinMode(led,OUTPUT);
}

void loop() {
if(Serial.available()>0)
a=Serial.read();


if(a=='7')
{
  digitalWrite(led,HIGH);
}
else
{
  digitalWrite(led,LOW);
}

}

////// code ends here
