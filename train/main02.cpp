#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;
double calcTax(double);

int main(){
  const char* FileIn = "../Income.txt";
  const char* FileOut = "../Tax.txt";
  double income, tax;
  ifstream FileInput;
  ofstream FileOutput;
  FileInput.open(FileIn);
  FileOutput.open(FileOut);
  
  if (!FileInput){
    cout << "file failed to open1" << endl; exit(1);
  }
  if (!FileOutput){
    cout << "file failed to open2" << endl; exit(1);
  }
    
  FileInput >> income;
  tax = calcTax(income);
  cout << "your income is " << income 
      << ", tax = " << tax << endl;
  FileOutput << "Tax is "<<tax;
  FileInput.close();
  FileOutput.close();
  
  return 0;
}

double calcTax(double inc){
  return inc*0.5;
}

