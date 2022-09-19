#ifndef FILTERODD_H
#define FILTERODD_H

#include "FilterGeneric.h"

class FilterOdd: public FilterGeneric {
  bool g(int) final;
};

#endif //FILTERODD_H
