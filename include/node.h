#ifndef NODE_H
#define NODE_H

#include <cstdint>

struct Node
{
  Node (int32_t value) : data(value), next(NULL)
  {
    // NTD
  }

  int32_t data;
  struct Node *next; 
};

#endif //NODE_H