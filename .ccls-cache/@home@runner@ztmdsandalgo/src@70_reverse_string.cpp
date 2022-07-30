#include "../include/70_reverse_string.h"
#include <cstddef>

void reverseString(std::string& inStr) {
  size_t i = 0;
  size_t j = inStr.length() - 1;

  while (i < j) {
    inStr[i] = inStr[i] ^ inStr[j];
    inStr[j] = inStr[i] ^ inStr[j];
    inStr[i] = inStr[i] ^ inStr[j];
    ++i;
    --j;
  }
}