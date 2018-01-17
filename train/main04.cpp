#include <cstdlib>
#include <iostream>
#include "First.h"
#include "Second.h"
using namespace std;
using NS1::Member;
using NS2::Gain;



int main(){
  Member Ma = {"George Wang", 234543};
  NS2::Member Mb = {34, "Peter White", 12.67};
  
  cout << "Name of Ma: " << Ma.Name << endl;
  cout << "Name of Mb: " << Mb.Name << endl;
  cout << "NS1::Gain is: " << Gain << endl;
  cout << "NS1::Fnc() is " << NS1::Fnc(1.5) << endl;
  
  return 0;
}


