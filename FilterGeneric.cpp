#include "FilterGeneric.h"

void FilterGeneric::recursiveFilter(
    size_t index,
    const std::vector<int>& list,
    std::vector<int>& res) {
  if (index == list.size()) {
    return;
  }
  if (g(list.at(index))) {
    res.push_back(list.at(index));
  }
  recursiveFilter(++index, list, res);
}

std::vector<int> FilterGeneric::filter(std::vector<int> list) {
  std::vector<int> res;
  recursiveFilter(0, list, res);
  return res;
}
