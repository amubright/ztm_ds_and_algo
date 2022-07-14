#include <iostream>
#include "include/53_gi_find_pairs.h"
#include "include/54_has_common_items.h"

int main() 
{
  // 53. Google Interview - Find pairs with sum
  // std::vector<int> arr = {1, 2, 5, 3};
  // bool hasPair = hasPairWithSum (arr, 8);
  // std::cout << hasPair << std::endl;

  std::vector<char> array1 = {'a', 'b', 'c', 'x'};
  std::vector<char> array2 = {'z', 'y', 'i'};
  bool hasCommon = hasCommonItems(array1, array2);
  std::cout << hasCommon << std::endl;
  
}