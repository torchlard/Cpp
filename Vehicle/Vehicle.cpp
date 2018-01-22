#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle(){
  position = 0.0;
  speed = 0.0;
  owner = "";
  // cout << "vehicle on road.\n";
}

Vehicle::Vehicle(float pos=0.0, float speed=0.0){
  position = pos;
  speed = speed;
  owner = "";
  // cout << "vehicle on road.\n";
}
Vehicle::~Vehicle() {
  // cout << "vehicle destroyed.\n";
}
void Vehicle::accelerate(int f){
  speed += f*5.0;
}

void Vehicle::move(){
  position += speed;
}

