#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H

#include <vector>

class ReduceGeneric {
  virtual int binaryOperator(int, int) = 0;
  int recursiveReduce(size_t, const std::vector<int>&, int);

 public:
  int reduce(std::vector<int>);
};

#endif //REDUCEGENERIC_H
