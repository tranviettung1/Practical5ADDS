#ifndef FILTERNONPOSITIVE_H
#define FILTERNONPOSITIVE_H

#include "FilterGeneric.h"

class FilterNonPositive: public FilterGeneric {
  bool g(int) final;
};

#endif //FILTERNONPOSITIVE_H
