#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car : public Vehicle {
private:
  string color;
public:
  void accelerate(int f);
  Car(string name);
  void printMsg();
};

#endif