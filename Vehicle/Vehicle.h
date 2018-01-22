#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
  int length, width;
  float speed;
  float position;
  string owner;
  Vehicle();
  Vehicle(float pos, float speed);
  ~Vehicle();
  void accelerate(int f);
  void move();
};

#endif