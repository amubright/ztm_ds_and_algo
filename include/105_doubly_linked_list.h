#ifndef DOUBLY_LINKED_LIST
#define DOUBLY_LINKED_LIST

#include <iostream>
#include <cstdint>
#include <cstddef>

struct DllNode
{
  DllNode(int32_t value) : data(value), prev(NULL), next(NULL)
  {
    
  }

  int32_t data;
  struct DllNode * prev;
  struct DllNode * next;
};

class DoublyLinkedList
{
public:
  DoublyLinkedList() : m_head(NULL), m_tail(NULL), m_length(0) 
  {
    
  }

  DoublyLinkedList(int32_t value) : m_head(new DllNode(value)), m_tail(m_head), m_length(0)
  {
  
  }

  void append(int32_t value);
  void prepend(int32_t value);
  void insert(size_t index, int32_t value);
  void remove(size_t index);
  void print();
private:
  DllNode *m_head;
  DllNode *m_tail;
  size_t m_length;
};
#endif //DOUBLY_LINKED_LIST