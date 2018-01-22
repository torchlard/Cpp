#include "Bus.h"

Bus::Bus(int seat) : seat_no(seat), Vehicle() {}

void Bus::go_stop(){
  cout << "stop at some where\n";
}

void Bus::printMsg(){
  cout << "set no: "<<seat_no<<endl;
  cout << "speed: "<<speed<<endl;
  cout << "position: "<<position<<endl;
  cout << "owner: "<< owner<<"\n\n";
}
