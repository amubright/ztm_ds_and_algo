#include "include/53_gi_find_pairs.h"
#include "include/54_has_common_items.h"
#include "include/68_my_array.h"
#include "include/70_reverse_string.h"
#include "include/72_merge_sorted_arrays.h"
#include "include/80_hash_table.h"
#include "include/85_first_recurring_char.h"
#include "include/vector_utils.h"
#include <iostream>

int main() {
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
  // std::string inputStr("Hi, I'm Amutha");
  // reverseString(inputStr);
  // std::cout << inputStr << std::endl;

  // 72. Merge Sorted Arrays
  // std::vector<int32_t> arr1{4, 6, 30};
  // std::vector<int32_t> arr2{0, 3, 4, 31};
  // std::vector<int32_t> resArr;
  // mergeSortedArrays(resArr, arr1, arr2);
  // print(resArr);

  // 80. Hash Table
  // HashTable htable(2);
  // htable.set("grapes", 10000);
  // htable.set("apples", 9);
  // htable.set("oranges", 10);
  // htable.set("mangoes", 15);
  // std::cout << htable.get("grapes") << " " << htable.get("apples") << std::endl;  
  // std::cout << htable.get("oranges") << std::endl;
  // std::cout << htable.get("mangoes") << std::endl;
  // htable.keys();

  // 85. First Recurring Character
  std::vector<int32_t> input { 2,3,4,5 };
  int32_t firstElement;
  if (true == firstRecurringChar (input, firstElement))
  {
    std::cout << firstElement << std::endl;
  }
  else
  {
    std::cout << "undefined" << std::endl;
  }
}