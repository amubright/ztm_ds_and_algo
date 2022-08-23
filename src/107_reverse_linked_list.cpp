#include "../include/95_linked_list.h"

void LinkedList::reverse(void)
{
  if(m_head == m_tail)
  {
    return;
  }

  Node *prev = NULL;
  Node *curr = m_head;

  while(curr != NULL)
  {
    Node *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;    
  }
  m_tail = m_head;
  m_head = prev;  
}