#include <iostream>

template<typename T, int i=4>
class Comp {
public:
  typedef volatile T* retType; // volatile: prevent compiler optimize code, keey it untouch
  enum { retValume = i+Comp<T,i-1>::retValume };
  static void f() { std::cout << "someComp: i=" << i<<'\n';}
};

template<typename T>
class Comp<T,0> { // special condition in template, stop recursion condition (when =0)
public:
  enum { retValume = 0};
};

// template without int condition, call back f()
template<typename T>
class codeComp {
public:
  static void f() { T::f(); }
};

int main(){
  Comp<int>::retType a=0;
  std::cout << sizeof(a)<<'\n';
  std::cout << Comp<int,10>::retValume << '\n';
  codeComp< Comp<int> >::f();
  codeComp< Comp<int,20> >::f();

  // std::cin.get();
  return 0;
}


