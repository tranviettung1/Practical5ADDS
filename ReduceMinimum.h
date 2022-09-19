#ifndef REDUCEMINIMUM_H
#define REDUCEMINIMUM_H

#include "ReduceGeneric.h"

class ReduceMinimum: public ReduceGeneric {
  int binaryOperator(int, int) final;
};

#endif //REDUCEMINIMUM_H
