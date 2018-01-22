#include "Bus.h"
#include "Car.h"
#include "Person.h"
#include <cstdlib>

int main() {

  // Car car1("white");
  Car* car1 = new Car("white");
  Bus* bus1 = new Bus(130);
  Person ps1("John","Clay");
  Person ps2("ab","cd");

  ps1.own_vehicle(car1);
  ps2.own_vehicle(bus1);
  car1->printMsg();
  bus1->printMsg();

   return 0;
 }
