#ifndef MAPGENERIC_H
#define MAPGENERIC_H

#include <vector>

class MapGeneric {
  virtual int f(int) = 0;
  void recursiveMap(const std::vector<int>&, std::vector<int>&);

 public:
  std::vector<int> map(std::vector<int>);
};

#endif //MAPGENERIC_H
