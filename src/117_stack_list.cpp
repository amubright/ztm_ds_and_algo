#include <iostream>
#include "../include/117_stack_list.h"

int32_t StackList::peek(void)
{
  return m_top->data; // Seg fault when stack is empty.
}

void StackList::push(int32_t value)
{
  Node *newNode = new Node(value);
  newNode->next = m_top;
  m_top = newNode;
  ++m_length;
}

void StackList::pop(void)
{
  if(m_top != NULL)
  {
    Node *temp = m_top;
    m_top = m_top->next;
    delete temp;
    --m_length;
  }
}

void StackList::print(void)
{
  Node *curr = m_top;
  while(curr != NULL)
  {
    std::cout << curr->data << std::endl;
    curr = curr->next;
  }
}

bool StackList::isEmpty(void)
{
  return (m_top == NULL) ? true : false;
}