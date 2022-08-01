#include "../include/85_first_recurring_char.h"
#include <unordered_set>

// Naive O(n^2) solution
// bool firstRecurringChar(std::vector<int32_t> &numVec, int32_t &firstChar) 
// {
//   size_t recIndex = -1;
//   for(size_t i = 0; (i < numVec.size()) && (i < recIndex); ++i)
//   {
//     for(size_t j = i+1; j < numVec.size(); ++j)
//     {
//       if((numVec[i] == numVec[j]) && (recIndex > j))
//       {
//         recIndex = j;
//       }
//     }
//   }

//   if(recIndex != -1)
//   {
//     firstChar = numVec[recIndex];
//     return true;
//   }
//   return false;
// }

// O(n^2) cleaner solution
// bool firstRecurringChar(std::vector<int32_t> &numVec, int32_t &firstChar) 
// {
//   for(size_t i = 1; i < numVec.size(); ++i)
//   {
//     for(int32_t j = i-1; j >=0; --j)
//     {
//       if(numVec[i] == numVec[j])
//       {
//         firstChar = numVec[j];
//         return true;
//       }  
//     }
//   }
//   return false;
// }

// Optimized O(n) solution
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