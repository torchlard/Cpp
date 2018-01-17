#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class vehicle {
private:
  int engineNo;
  string owner;
public:
  void setNumber(int no) { engineNo = no;}
  void setOwner(string owner) { owner = owner;}
  void printVehicle(){
    cout<<"people: "<<owner<<endl;
    cout<<"engine no: "<<engineNo<<endl;
  }
};

class car : public vehicle {
private:
  int doors;
public:
  car(string owner, int no, int doors){
    setOwner(owner);
    setNumber(no);
    doors = doors;
  }
  void printCar(){
    cout<<"car info==="<<endl;
    printVehicle();
    cout<<"doors: "<<doors<<endl;
  }
};

int main(){
  car tommy("Tommy",4143,3);
  car joe("Joe",5632,2);

  tommy.setOwner("hey boy");
  joe.setNumber(65476);
  tommy.printCar();
  joe.printCar();

  return 0;
}



