#include "FilterForTwoDigitPositive.h"

bool FilterForTwoDigitPositive::g(int x) {
  return x / 100 == 0 && x / 10 > 0;
}
