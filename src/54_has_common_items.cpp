#include <unordered_set>
#include "../include/54_has_common_items.h"

// Naive solution - O(n^2)
// bool hasCommonItems(std::vector<char> &arr1, std::vector<char> &arr2)
// {
//   for (int i = 0; i < arr1.size(); ++i)
//   {
//     for(int j = 0; j < arr2.size(); ++j) 
//     {
//       if(arr1[i] == arr2[j])
//       {
//         return true;
//       }
//     }      
//   }
//   return false;
// }

// Improved solution - O(a+b) 
// works for unsorted array as well
bool hasCommonItems(std::vector<char> &arr1, std::vector<char> &arr2)
{
  std::unordered_set<char> arr_items;

  for(auto element : arr1)
  {
    arr_items.insert(element);
  }

  for(auto element : arr2)
  {
    if(arr_items.find(element) != arr_items.end()) 
    {
      return true;
    }
  }

  return false;
}
