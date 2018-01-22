#ifndef PERSON_H
#define PERSON_H
#include <Car.h>
#include <Bus.h>

// template <class T>
class Person {
private:
  string first_name;
  string last_name;
public:
  Person(string first, string last){
    first_name = first;
    last_name = last;
  }
  // void own_vehicle(T* veh1){
  //   string hostname = first_name+" "+last_name;
  //   veh1->owner = hostname;
  //   cout << "car assigned to "<<hostname<<endl;
  // }

  void own_vehicle(Car* veh1){
    string hostname = first_name+" "+last_name;
    veh1->owner = hostname;
    cout << "car assigned to "<<hostname<<endl;
  }

  void own_vehicle(Bus* veh1){
    string hostname = first_name+" "+last_name;
    veh1->owner = hostname;
    cout << "bus assigned to "<<hostname<<endl;
  }
};


#endif