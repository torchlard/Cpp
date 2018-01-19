#include <cstdlib>
#include <iostream>
using namespace std;

class Shape {
private:
  int i;
public:
  Shape() {}
  Shape(int n): i(5) {}
  // virtual ~Shape(){}
  virtual void rotate() {cout<<"shape rotate\n";}
  virtual void erase()=0;
  // void erase() {cout<<"erase shape\n";}
};

class Circle: public Shape {
private:
  int r,h;
public:
  Circle() { }
  ~Circle() { }
  void rotate() {cout<<"circle rotate\n";}
  void erase(){ Shape::erase();}
};

class Cylinder: public Circle {
private:
  int r,h,l;
public:
  Cylinder() {}
  ~Cylinder() {}
  void rotate() {cout<<"cylinder rotate\n";}
  void erase(){ cout<<"cylin erase\n";}
};

void Shape::erase() {cout<<"erase shape\n";}

int main(){
  Shape *sh1 = new Circle;
  Shape *sh2 = new Cylinder;
  sh1->rotate();
  sh1->erase();
  sh2->erase();
  
  return 0;
}

