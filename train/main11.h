#ifndef MAIN11_H
#define MAIN11_H
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

inline void Check(bool ErrorCondition, 
  const string& Message = "requirement failed!"){
    if(ErrorCondition){
      cerr<<Message<<endl; exit(1);
    }
}

template <class T>
class Vector {
  // & in declaration means parameter pass-by-reference, so the object that function manipulate is external object itself. If not using &: 
  // 1. value not change  2. create temp object, waste resource
  template<class U> friend Vector<T> operator* (const T&, const Vector<T>& );
  template<class U> friend Vector<T> operator* (const Vector<T>&, const T& );
private:
  int Size;
  T* V;
  inline void Create(int);
public:
  // constructor
  Vector(int);
  Vector(int, const T*);
  // copy constructor
  Vector(Vector<T>&);
  // destructor
  ~Vector();
  
  Vector<T> operator= (const Vector<T>&);
  Vector<T> operator+ (const Vector<T>&);
  Vector<T> operator- (const Vector<T>&);
  T operator* (const Vector<T>&);
  Vector<T> operator/ (const T&);
  T& operator[] (int i){
    Check(i>Size, "index failed!"); // if failed, stop
    return V[i]; 
  }
  
  void Display();
};

template <class T>
void Vector<T>::Create(int N){
  if(N<1) { Size=0; V=0; }
  else { Size=N; V = new T[N+1]; }
}

template <class T>
Vector<T>::Vector(int N) {
  Create(N); return;
}
// shift index
template <class T>
Vector<T>::Vector(int N, const T* OldV){
  Create(N);
  for (int i=1; i<=Size; i++){
    V[i] = OldV[i-1];
  }
  return;
}

template <class T>
Vector<T>::Vector(Vector<T>& OldV){
  Create(OldV.Size);
  for(int i=1; i<=Size; i++){
    V[i] = OldV[i];
  }
  return;
}

template <class T>
Vector<T>::~Vector() {
  delete [] V;
}

//operators
template <class T>
Vector<T> Vector<T>::operator= (const Vector<T>& V2){
  if(Size != V2.Size)
    Create(V2.Size);
  for (int i=1; i<=Size; i++)
    V[i] = V2.V[i];
  return *this;
}

template <class T>
Vector<T> Vector<T>::operator+ (const Vector<T>& V2){
  Check(Size!=V2.Size, "size not the smae");
  Vector<T> Temp(Size);
  for (int i=1; i<=Size; i++){
    Temp.V[i] = V[i]+V2.V[i];
  }
  return Temp;
}

template <class T>
Vector<T> Vector<T>::operator- (const Vector<T>& V2){
  Check(Size!=V2.Size, "not same");
  Vector<T> Temp(Size);
  for(int i=1; i<=Size; i++)
    Temp.V[i] = V[i]-V2.V[i];
  return Temp;
}

template <class T>
Vector<T> operator* (const T& f, const Vector<T>& V1){
  Vector<T> Temp(V1.Size);
  for(int i=1; i<=V1.Size; i++)
    Temp.V[i] = f*V1.V[i];
  return Temp;
}
template <class T>
Vector<T> operator* (const Vector<T>& V1, const T& f){
  Vector<T> Temp(V1.Size);
  for(int i=1; i<=V1.Size; i++)
    Temp.V[i] = f*V1.V[i];
  return Temp;
}
template <class T>
T Vector<T>::operator* (const Vector<T>& V2){
  Check(Size!=V2.Size);
  T temp = 0;
  for(int i=1; i<=Size; i++)
    temp += V[i]*V2.V[i];
  return temp;
}

template <class T>
Vector<T> Vector<T>::operator/ (const T& f){
  Vector<T> Temp(Size);
  for(int i=1; i<=Size; i++)
    Temp.V[i] = V[i]/f;
  return Temp;
}

// Display
template <class T>
void Vector<T>::Display(){
  for (int i=1; i<=Size; i++){
    cout << setiosflags(ios::right|ios::fixed|ios::showpoint)
      << setprecision(4) << setw(12) << V[i];
  }
  cout << endl;
  return;
}

#endif






