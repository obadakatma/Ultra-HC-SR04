#ifndef ULTRA_HC - SR04_H
#define ULTRA_HC -SR04_H

#include <Arduino.h>

class Ultra {
  private:
    int trigPin, echoPin;
    float distance_centemeters;
    float distance_inches;
    double duration;

  public:
    Ultra(int trigPin, int echoPin);  //Constructor to define ultrasonic pins mode
    void init();
    void  distance();
    float distance_cm();  //calculating distance in centemeters
    float distance_in();  //calculating distance in inches
};

#endif
