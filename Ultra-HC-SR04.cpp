#include "Arduino.h"
#include "Ultra-HC-SR04.h"

Ultra::Ultra(int trigPin, int echoPin) {
  this->trigPin = trigPin;
  this->echoPin = echoPin;
  init();
}

void Ultra::init() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void Ultra::distance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);  // Reads the echoPin, returns the sound wave travel time in microseconds
  this->duration = pulseIn(echoPin, HIGH);  // Calculating the distance
  this->distance_centemeters = duration * 0.034 / 2;
  this->distance_inches = duration * 0.0133 / 2 ;
}


float Ultra::distance_cm() {
  distance();
  if (distance_centemeters <= 400)
  {
    return distance_centemeters;
  }
}


float Ultra::distance_in() {
  distance();
  if (distance_inches <= 157)
  {
    return distance_inches;
  }
}
