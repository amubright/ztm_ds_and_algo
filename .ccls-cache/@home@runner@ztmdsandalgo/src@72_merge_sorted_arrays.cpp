#include "../include/72_merge_sorted_arrays.h"

void mergeSortedArrays(std::vector<int32_t>& resArr, const std::vector<int32_t>& arr1, const std::vector<int32_t>& arr2)
{
  int32_t i = 0;
  int32_t j = 0;

  while(i < arr1.size() || j < arr2.size())
  {
    if((j == arr2.size()) || ((i < arr1.size()) && (arr1[i] < arr2[j])))
    {
      resArr.push_back(arr1[i]);
      ++i;
    }
    else
    {
      resArr.push_back(arr2[j]);
      ++j;
    }
  }
}
