#include "ReduceGCD.h"

int ReduceGCD::binaryOperator(int x, int y) {
  // no need abs values as x and y are positive.
  return y == 0 ? x : binaryOperator(y , x % y);
}
