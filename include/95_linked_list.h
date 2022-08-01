#ifndef LINKED_LIST
#define LINKED_LIST

#include <cstdint>
#include <cstddef>

struct Node
{
  Node (int32_t value) : m_data(value), m_next(NULL)
  {
    // NTD
  }

  int32_t m_data;
  struct Node *m_next; 
};

class LinkedList
{
public:
  LinkedList() : m_head (NULL), m_tail(m_head), m_length(0) 
  {
    // NTD  
  }

  LinkedList(int32_t value) : m_head (new Node(value)), m_tail(m_head), m_length (1) 
  {
    // NTD  
  }

  void append (int32_t value);
  void prepend (int32_t value);
  void insert (size_t index, int32_t value);
  void remove (size_t index);
  void reverse (void);
  void print(void);

private:
  Node *m_head;
  Node *m_tail;
  size_t m_length;
};

#endif //LINKED_LIST