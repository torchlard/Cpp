#include <iostream>
#include <stdint.h>
using namespace std;

template <typename T> // size_t: unsigned integer type
void copy(T *dest, T const *src, size_t elemCount) {
  for (size_t i = 0; i < elemCount; ++i)
    dest[i] = src[i];
};

template <typename T> class TypeToID<T *> {
public:
  typedef T SameAsT;
  static int const ID = 80;
};

int main() {

  cout << "ID:" << TypeToID<TypeToID<float *>::SameAsT>::ID << endl;

  return 0;
}
