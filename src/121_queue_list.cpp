#include <iostream>
#include "../include/121_queue_list.h"

std::string& QueueList::peek(void)
{
  return m_first->data;
}

void QueueList::enqueue(const std::string& value)
{
  StrNode *newNode = new StrNode(value);

  if(m_last == NULL)
  {
    m_last = newNode;
    m_first = m_last;
  }
  else
  {
    m_last->next = newNode;
    m_last = newNode;
  }

  ++m_length;
}

void QueueList::dequeue(void)
{
  if(m_first != NULL)
  {
    StrNode *temp = m_first;
    m_first = m_first->next;
    delete temp;
    --m_length;
  }
}

void QueueList::print(void)
{
  StrNode *curr = m_first;
  while(curr != NULL)
  {
    std::cout << curr->data << std::endl;
    curr = curr->next;
  }
}