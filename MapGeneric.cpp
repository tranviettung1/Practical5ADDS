#include "MapGeneric.h"

void MapGeneric::recursiveMap(
    const std::vector<int> &list,
    std::vector<int>& res) {
  if (res.size() == list.size()) {
    return;
  }
  res.push_back(f(list.at(res.size())));
  recursiveMap(list, res);
}

std::vector<int> MapGeneric::map(std::vector<int> list) {
  std::vector<int> res;
  recursiveMap(list, res);
  return res;
}
