#include "MapAbsoluteValue.h"

int MapAbsoluteValue::f(int x) {
  int mask = x >> sizeof(int) * (CHAR_BIT - 1);
  return (x ^ mask) - mask;
  // return abs(x);
}
