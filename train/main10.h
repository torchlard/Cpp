#ifndef MAIN10_H
#define MAIN10_H
#include <iostream>
using namespace std;

class Float {
  friend Float operator ! (const Float& F1);
  friend Float& operator -- (Float& F1);
  friend Float operator -- (Float& F1, int);
private:
  float F;
public:
  Float(float x): F(x) {}
  Float(): F(0) {}
  // conversion
  operator float() {return F;}
  Float operator -() { return Float(-F);}
  // prefix
  Float& operator ++(){
    ++F;
    return *this;
  }
  // postfix
  Float operator++(int){
    Float Before(F);
    F++;
    return Before;
  }
};

Float operator ! (const Float& F1){
  // will not change F1
  return Float(F1.F * F1.F*100000);
}
// --F1
Float& operator -- (Float& F1){
  F1.F--; return F1;
}
// F1--
Float operator -- (Float& F1, int){
  Float before(F1.F);
  F1.F--;
  return before; // later response because return previoius value
}


#endif