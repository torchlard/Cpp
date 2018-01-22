#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
  const int Size=5;
  int i,SizeF, SizeC;
  float A[Size] = {1.5,2.9,3.8,4.1,1.3};
  char B[Size] = {'f','G','d','x','a'};

  vector<float> Vf(A, A+Size);
  vector<char> Vc(B, B+Size);
  SizeF = Vf.size();
  SizeC = Vc.size();

  ostream_iterator<float> IntOut(cout, " ");
  ostream_iterator<char> CharOut(cout, " ");

  cout<<"Vf: \n";
  for (i=0; i<SizeF; i++)
    cout << Vf[i] << " ";
  cout<<endl;

  Vf.at(2) = 9.9;
  Vf.at(0)=1.2;
  cout<<"Vf.at(2): \n";
  copy(Vf.begin(), Vf.end(), IntOut);
  cout<<endl;

  cout<<"after random shuffle: \n";
  random_shuffle(Vf.begin(), Vf.end());
  copy(Vf.begin(), Vf.end(), IntOut);
  cout<<endl;

  cout<<"Vc: \n";
  copy(Vc.begin(), Vc.end(), CharOut);
  cout<<endl;

  cout<<"after soft: \n";
  sort(Vc.begin(), Vc.end());
  copy(Vc.begin(), Vc.end(), CharOut);
  cout<<endl;

  return 0;
}




































