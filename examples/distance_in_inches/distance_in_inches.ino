#include <Ultra-HC-SR04.h>

#define trig 9
#define echo 8

Ultra sonic(trig, echo);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("distance in inch :");
  Serial.println(sonic.distance_in());

  delay(60);
}
