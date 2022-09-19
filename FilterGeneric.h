#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H

#include <vector>

class FilterGeneric {
  virtual bool g(int) = 0;
  void recursiveFilter(size_t, const std::vector<int>&, std::vector<int>&);

 public:
  std::vector<int> filter(std::vector<int>);
};

#endif //FILTERGENERIC_H
