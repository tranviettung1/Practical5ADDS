#ifndef FILTERFORTWODIGITPOSITIVE_H
#define FILTERFORTWODIGITPOSITIVE_H

#include "FilterGeneric.h"

class FilterForTwoDigitPositive: public FilterGeneric {
  bool g(int) final;
};

#endif //FILTERFORTWODIGITPOSITIVE_H
