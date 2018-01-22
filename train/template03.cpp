#include <iostream>
#include <stdint.h>
using namespace std;

template <typename T> class TypeToID {
public:
  static int const NotID = -1;
};

// need to declare #include <stdint.h> for uint8_t
template <> class TypeToID<uint8_t> {
public:
  static int const ID = 0;
};

template <> class TypeToID<float> {
public:
  static int const ID = 0xF10A7;
};

template <> class TypeToID<void *> {
public:
  static int const ID = 2;
};

void PrintID() { cout << "ID of uint8_t: " << TypeToID<uint8_t>::ID << endl; }

int main() {

  PrintID();

  return 0;
}
