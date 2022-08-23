#ifndef STACK_LIST
#define STACK_LIST

#include <cstddef>
#include "node.h"

class StackList
{
public:
  int32_t peek (void);
  void push(int32_t value);
  void pop(void);
  bool isEmpty(void);
  void print(void);

private:
  Node *m_top = NULL;
  //Node *m_bottom = NULL;
  size_t m_length = 0;
};
#endif // STACK_LIST