#include "include/53_gi_find_pairs.h"
#include "include/54_has_common_items.h"
#include "include/68_my_array.h"
#include "include/70_reverse_string.h"
#include "include/72_merge_sorted_arrays.h"
#include "include/80_hash_table.h"
#include "include/85_first_recurring_char.h"
#include "include/95_linked_list.h"
#include "include/105_doubly_linked_list.h"
#include "include/117_stack_list.h"
#include "include/119_stack.h"
#include "include/121_queue_list.h"
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
  // std::vector<int32_t> input { 2,5,1,2,3,5,1,2,4 };
  // int32_t firstElement;
  // if (true == firstRecurringChar (input, firstElement))
  // {
  //   std::cout << firstElement << std::endl;
  // }
  // else
  // {
  //   std::cout << "undefined" << std::endl;
  // }

  // 95. Linked List Data Structure
  // LinkedList llist;
  // llist.prepend(0);
  // llist.append(50);
  // llist.insert(0, -10);
  // llist.insert(3, 20);
  // llist.insert(7, 60);
  // llist.remove(0);
  // llist.remove(6);
  // llist.remove(2);
  // llist.print();

  // 105. Double Linked List Data Structure
  // DoublyLinkedList dllist;
  // dllist.append(0);
  // dllist.append(50);
  // dllist.insert(0, -10);
  // dllist.insert(7, 60);
  // dllist.insert(2, 20);
  // dllist.insert(3, 30);
  // dllist.remove(2);
  // dllist.remove(0);
  // dllist.remove(5);
  //  dllist.print();

  // 107. Reverse a linked list
  // LinkedList llist;
  // llist.append(0);
  // llist.append(10);
  // llist.append(20);
  // llist.append(30);
  // llist.append(40);
  // llist.append(50);
  // llist.reverse();
  // llist.insert(3, 30);
  // llist.print();

  // 117. Stack List
  // StackList myStackList;
  // std::cout << myStackList.isEmpty() << std::endl;
  // myStackList.push(50);
  // myStackList.push(40);
  // myStackList.push(30);
  // myStackList.push(20);
  // myStackList.push(10);
  // std::cout << myStackList.peek() << std::endl;
  // myStackList.pop();
  // myStackList.pop();
  // std::cout << myStackList.isEmpty() << std::endl;
  // myStackList.print();

  // 119.  Stack using Arrays/vectors
  // Stack myStackList;
  // std::cout << myStackList.isEmpty() << std::endl;
  // myStackList.push("google");
  // myStackList.push("udemy");
  // myStackList.push("discord");
  // myStackList.push("youtube");
  // myStackList.push("facebook");
  // std::cout << myStackList.peek() << std::endl;
  // myStackList.pop();
  // myStackList.pop();
  // std::cout << myStackList.isEmpty() << std::endl;
  // myStackList.print();

  // 121. Queue List
  // QueueList qlist;
  // qlist.enqueue("google");
  // qlist.enqueue("udemy");
  // qlist.enqueue("discord");
  // qlist.enqueue("youtube");
  // std::cout << qlist.peek() << std::endl;
  // qlist.dequeue();
  // qlist.dequeue();
  // qlist.print();
}