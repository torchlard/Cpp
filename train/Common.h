#ifndef COMMON_H
#define COMMON_H
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

namespace ExcNameSpace {
  class Overflow {};
  class Underflow {};
  const int Size=5;
  const float Epsilon = 1.0E-16;
}
float ShowVectorElement(float [], int);


#endif
