#include "Common.h"
using namespace ExcNameSpace;

int main(){
  const int Size = 5;
  float V[Size];
  int M;
  
  for (int i=0; i<Size; i++)
    V[i] = float(i);
  try {
    cout << "pls enter number within range: ";
    cin >> M;
    cout << "The value is " << ShowVectorElement(V,M) << endl;
  } catch (Overflow) {
    cerr << "overflow!" << endl;
  } catch (Underflow) {
    cerr << "underflow!" << endl;
  } catch (...) {
    cerr << "other errors!" << endl;
  }
  
  return 0;
}

