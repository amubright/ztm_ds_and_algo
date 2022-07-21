#include <iostream>
#include "include/53_gi_find_pairs.h"
#include "include/54_has_common_items.h"
#include "include/68_my_array.h"
#include "include/70_reverse_string.h"

int main() 
{
  // 53. Google Interview - Find pairs with sum
  // std::vector<int> arr = {1, 2, 5, 3};
  // bool hasPair = hasPairWithSum (arr, 8);
  // std::cout << hasPair << std::endl;

  // 54. Has common items
  // std::vector<char> array1 = {'a', 'b', 'c', 'x'};
  // std::vector<char> array2 = {'z', 'y', 'i'};
  // bool hasCommon = hasCommonItems(array1, array2);
  // std::cout << hasCommon << std::endl;

  // 68. Array Implementation
  // my_array arr;
  // arr.push_back(10);
  // arr.push_back(20);
  // arr.push_back(30);
  // arr.push_back(40);
  // arr.push_back(50);
  // arr.print();

  // std::cout << "pop two elements" << std::endl;
  // arr.pop_back();
  // arr.pop_back();
  // arr.print();

  // std::cout << "push three elements" << std::endl;
  // arr.push_back(60);
  // arr.push_back(70);
  // arr.push_back(80);
  // arr.print();

  // std::cout << "erase index 3" << std::endl;
  // arr.erase(3);
  // arr.print();
  // arr.erase(4);
  // arr.print();

  // 70. Reverse a string
  std::string inputStr("Hi, I'm Amutha");
  reverseString(inputStr);
  std::cout << inputStr << std::endl;
}