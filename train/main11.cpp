#include "main11.h"

int main(){
  double Ddata1[] = {2,0.5,3.6};
  double Ddata2[] = {4, 3.4, 5.6};
  int Idata1[] = {2,5,6};
  int Idata2[] = {3,45,23};
  Vector<double> DV1(3,Ddata1);
  Vector<double> DV2(3,Ddata2), DVa(3), DVb(3);
  Vector<int> IV1(3,Idata1);
  Vector<int> IV2(3,Idata2), IVa(3), IVb(3);
  int Idot;
  double Ddot;
  
  cout<<"DV1 val:\n";
  DV1.Display();
  cout<<"DV2:\n";
  DV2.Display();
  DVa = DV1+DV2;
  cout<<"DV1+DV2\n";
  DVa.Display();
  
  return 0;
}
