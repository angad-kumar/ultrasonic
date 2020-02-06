#include "ultrasonic.h"
ultrasonic::ultrasonic(int echo,int trig)
{
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  _trig=trig;
  _echo=echo;
}
int ultrasonic::distanceInCm()
{
  int duration,distance;
  digitalWrite(_trig,LOW);
  delay(2);
  digitalWrite(_trig,HIGH);
  delay(10);
  digitalWrite(_trig,LOW);
  duration=pulseIn(_echo,HIGH);
  distance=(duration*0.034)/2;
  return distance;
}

