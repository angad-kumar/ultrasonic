#ifndef ultrasonic_H
#define ultrasonic_H
#include "arduino.h"
class ultrasonic
{
  public:
  ultrasonic(int echo,int trig);
  int distanceInCm();
  int _echo;
  int _trig;
};


#endif
