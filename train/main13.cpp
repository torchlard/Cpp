#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  string A[] = {"John", "Mary","Peter","Sam","Lulu", "Lisa"};
  vector<string> S(A, A+6);
  int i, length=S.size();

  cout<<"S: \n";
  for(int i=0; i<length; i++)
    cout<<S[i]<<" ";
  cout<<endl;

  remove(S.begin(), S.end(), "Lulu");
  S.resize(S.size()-1);
  length = S.size();
  cout<<"remove: \n";
  for(int i=0; i<length; i++)
    cout<<S[i]<<" ";
  cout<<endl;

  *find(S.begin(), S.end(), "Mary") = "AMD";
  cout<<"replace: \n";
  for(int i=0; i<length; i++)
    cout<<S[i]<<" ";
  cout<<endl;

  S.insert(S.begin()+3, "hey");
  cout<<"insert: \n";
  for(int i=0; i<length; i++)
    cout<<S[i]<<" ";
  cout<<endl;

  return 0;
}













