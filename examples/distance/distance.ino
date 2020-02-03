#include"ultrasonic.h"
ultrasonic dis(2,3);//echo and trigger pin  
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  Serial.println(dis.distance());
}
