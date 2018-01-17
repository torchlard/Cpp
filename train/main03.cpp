#include <cstdlib>
#include <iostream>
using namespace std;

// linked list
struct Element {
  int Value;
  Element* Next;
};

int main(){
  int Size;
  cout << "Enter element size: ";
  cin >> Size; cout << "\n";
  Element* pE = new Element[Size];
  for (int i=0; i<Size; i++)
    pE[i].Next = pE+i+1;
  
  pE[Size-1].Next = NULL;
  for (int i=0; i<Size; i++)
    pE[i].Value = i*2;
  cout << "Element value are:\n";
  Element* pShow;
  for(pShow=pE; pShow!=NULL; pShow=pShow->Next )
    cout << pShow->Value << " ";
  cout << endl;
  
  delete [] pE;
  
  return 0;
}

