#include "../include/85_first_recurring_char.h"
#include <unordered_set>

bool firstRecurringChar(std::vector<int32_t> &numVec, int32_t &firstChar) {
  std::unordered_set<int32_t> uniVec;
  for (size_t i = 0; i < numVec.size(); ++i) 
  {
    auto p = uniVec.insert(numVec[i]);

    if (p.second == false) 
    {
      firstChar = numVec[i];
      return true;
    }
  }
  return false;
}