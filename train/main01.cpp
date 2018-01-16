#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
#define MAXSIZE 50

int square(int);
double square(double);
int getMax(int,int);
int getMax(int,int,int);

int main(){
  int no1 = 14;
  double no2 = 35.4;

  cout << "max: "<< getMax(14,16) << endl;
  cout << "max2: "<< getMax(14,16,101) << endl;
  cout << "square: " << square(no1)<<endl;
  cout << "square2: " << square(no2)<<endl;

  return 0;
}

int getMax(int a, int b){
  if (a>b) return a;
  else  return b;
}

int getMax(int a,int b,int c){
  int temp;
  if(a>b) temp=a;
  else temp=b;
  if(temp>c) return temp;
  else  return c;
}

int square (int no ) {
  return no*no;
}
double square(double no){
  return no*no+1;
}

