#ifndef BUS_H
#define BUS_H
#include "Vehicle.h"

class Bus: public Vehicle {
public:
  int seat_no;
  Bus(int seat);
  void go_stop();
  void printMsg();
};


#endif