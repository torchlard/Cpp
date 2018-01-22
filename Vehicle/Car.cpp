#include "Car.h"


void Car::accelerate(int f){
  speed += f*10.0;
}

Car::Car(string name): Vehicle() {
  color = name;
}

void Car::printMsg(){
  cout << "color: "<<color<<endl;
  cout << "speed: "<<speed<<endl;
  cout << "position: "<<position<<endl;
  cout << "owner: "<< owner<<"\n\n";
}


