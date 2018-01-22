#include <iostream>

// template <class T, int i>
// class Calc {
// public:
//   enum { result = i + Calc<T,i-1>::result };
// };
// template <class T>
// class Calc<T,1> {
// public:
//   enum { result = 1};
// };

template <int i>
class Calc {
public:
  static const int result = Calc<i-1>::result + i;
};

template <>
class Calc<0> {
public:
  static const int result = 0;
};


int main(){

  std::cout << "result is " << Calc<5>::result << std::endl;

  return 0;
}

