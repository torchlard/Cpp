#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

const float Epsilon = 1.0E-16;
float Divide(float x, float y){
  if (std::fabs(y) <= Epsilon){
    throw "divided by zero!";
  }
  return x/y;
}

int main(){
  float m,n;
  try {
    cout << "input first number: ";
    cin >> m;
    cout << "input second no: ";
    cin >> n;
    float result = Divide(m,n);
    cout << "result is " << result << endl;
    
  } catch(const char* pError) {
    cerr << "Error occur: " << pError << endl;
  }
  
  
  return 0;
}

