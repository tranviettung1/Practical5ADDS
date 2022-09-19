#ifndef REDUCEGCD_H
#define REDUCEGCD_H

#include "ReduceGeneric.h"

class ReduceGCD: public ReduceGeneric {
  int binaryOperator(int, int) final;
};

#endif //REDUCEGCD_H
