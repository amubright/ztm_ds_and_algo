#include <iostream>
#include "include/53_gi_find_pairs.h"

int main() 
{
  std::vector<int> arr = {1, 2, 5, 3};
  bool hasPair = hasPairWithSum (arr, 8);
  std::cout << hasPair << std::endl;
}