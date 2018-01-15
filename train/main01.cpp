#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
#define MAXSIZE 50

struct myTime {
  int hour;
  int minute;
};

int main(){
  int num, *ptr1, *ptr2;
  ptr1 = &num;
  *ptr = 80;
  ptr2 = new int;
  *ptr2 = 150;
  
  cout << "num=" << num << endl;
  cout << "*ptr2 = " << *ptr2 << endl;
  delete ptr2;
  
  myTime *now;
  now = new myTime;
  now->hour = 19;
  now->minute=23;
  
  
  
  return 0;
}
