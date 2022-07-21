#include <iostream>
#include "../include/vector_utils.h"

void print(std::vector<int32_t> inVec)
{
  for(int i = 0; i < inVec.size(); ++i)
  {
      std::cout << inVec[i] << std::endl;
  }
}
