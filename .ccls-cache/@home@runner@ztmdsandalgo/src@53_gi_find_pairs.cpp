#include <iostream>
#include <unordered_set>
#include "../include/53_gi_find_pairs.h"

// for a sorted array - O(n^2)
// bool hasPairWithSum(std::vector<int> &arr, int sum)
// {
//   for(int i = 0; i < arr.size(); ++i)
//   {
//     for(int j = 0; j < arr.size(); ++j)
//     {
//       if(i != j)
//       {
//         if((arr[i] + arr[j]) == sum)
//           return true;
//       }        
//     }    
//   }
//   return false;
// }

// For a sorted array - O(n)
// bool hasPairWithSum(std::vector<int> &arr, int sum)
// {
//   int i = 0;
//   int j = arr.size() - 1;

//   while(i < j)
//   {
//     int pairSum = arr[i] + arr[j];
//     if(pairSum == sum)
//     {
//       return true;
//     }
//     else if (pairSum < sum)
//     {
//       ++i;
//     }
//     else
//     {
//       --j;
//     }
//   }
//   return false;
// }

// for an unsorted array - O(n)
bool hasPairWithSum(std::vector<int> &arr, int sum)
{
  std::unordered_set<int> comp;

  for(int i = 0; i < arr.size(); ++i)
  {
    if(comp.find(arr[i]) != comp.end())
    {
      return true;
    }
    else
    {
      comp.insert(sum-arr[i]);      
    }
  }
  return false;
}