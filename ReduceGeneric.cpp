#include "ReduceGeneric.h"

int ReduceGeneric::recursiveReduce(
    size_t index,
    const std::vector<int>& list,
    int res) {
  if (index == list.size()) {
    return res;
  }
  res = binaryOperator(res, list.at(index));
  return recursiveReduce(++index, list, res);
}

int ReduceGeneric::reduce(std::vector<int> list) {
  return recursiveReduce(1, list, list.front());
}
