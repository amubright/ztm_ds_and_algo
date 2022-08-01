#include <iostream>
#include "../include/95_linked_list.h"

void LinkedList::append(int32_t value)
{
  Node *newNode = new Node(value);
  if(m_head == NULL)
  {
    m_head = newNode;
  }
  else
  {
    m_tail->m_next = newNode;
  }

  m_tail = newNode;
  ++m_length;  
}

void LinkedList::prepend(int32_t value)
{
  Node *newNode = new Node(value);
  if(m_head == NULL)
  {
    m_head = newNode;
    m_tail = newNode;
  }
  else
  {
    newNode->m_next = m_head;
    m_head = newNode;
  }
  ++m_length;
}

void LinkedList::insert(size_t index, int32_t value)
{
  if(index > m_length)
  {
    return;
  }
  
  if(index == 0)
  {
    prepend(value);
  }
  else if(index == m_length)
  {
    append(value);
  }
  else
  {
    Node *curr = m_head;
    size_t i = 0;
    while(i < (index-1))
    {
      curr = curr->m_next;
      ++i;
    }
    Node *newNode = new Node(value);
    newNode->m_next = curr->m_next;
    curr->m_next = newNode;
  }
  ++m_length;
}

void LinkedList::remove(size_t index)
{
  if(index >= (m_length-1))
  {
    return;
  }
  
  Node *temp;
  if(index == 0)
  {
    temp = m_head;   
    m_head = m_head->m_next; 

    if(m_length == 1)
    {
      m_tail = NULL;
    }
  }
  else 
  {
    Node *curr = m_head;
    size_t i = 0;
    while(i < (index-1))
    {
      curr = curr->m_next;
      ++i;
    }    
    temp = curr->m_next;
    curr->m_next = curr->m_next->m_next;
    
    if(index == (m_length -1))
    {
      m_tail = curr;
    }
  }
  delete temp;
  --m_length;
}

void LinkedList::print(void)
{
  if(m_head == NULL)
  {
    std::cout << "List is empty" << std::endl;
  }

  Node* curr = m_head;
  while(curr != NULL)
  {
    std::cout << curr->m_data << " " << std::endl;
    curr = curr->m_next;
  }
}