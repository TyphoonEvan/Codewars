#include <iostream>

class Same {
    public :static bool comp(std::vector<int>, std::vector<int>);
};

bool Same::comp(std::vector<int> a, std::vector<int> b) {
  if (a.size() != b.size()) {
    return false;
  }
  if (a.empty()) {
    return true;
  }
  
  for (auto & elem : a) {
    elem *= elem;
  }
  
  return std::is_permutation(a.begin(), a.end(), b.begin());
}
