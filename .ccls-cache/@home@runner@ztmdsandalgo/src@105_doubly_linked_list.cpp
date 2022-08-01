#include <iostream>
#include "../include/105_doubly_linked_list.h"

void DoublyLinkedList::append(int32_t value)
{
  DllNode *newNode = new DllNode(value);

  if(m_head == NULL)
  {
    m_head = newNode;
    m_tail = newNode;    
  }
  else
  {
    m_tail->next = newNode;
    newNode->prev = m_tail;
    m_tail = newNode;
  }

  ++m_length;
}

void DoublyLinkedList::prepend(int32_t value)
{
  DllNode *newNode = new DllNode(value);

  if(m_head == NULL)
  {
    m_head = newNode;
    m_tail = newNode;
  }
  else
  {
    newNode->next = m_head;
    m_head->prev = newNode;
    m_head = newNode;
  }

  ++m_length;
}

void DoublyLinkedList::insert(size_t index, int32_t value)
{
  if(index == 0)
  {
    prepend(value);
  }
  else if (index >= m_length)
  {
    append(value);
  }
  else
  {
    DllNode *newNode = new DllNode(value);
    DllNode *curr = m_head;
    size_t i = 0;

    while(i != index)
    {
      curr = curr->next;
      ++i;
    }

    newNode->prev = curr->prev;
    newNode->next = curr;
    curr->prev->next = newNode;
    curr->prev = newNode;    
    ++m_length;
  }
}

void DoublyLinkedList::remove(size_t index)
{
  if(index >= m_length)
  {
    index = m_length-1;
  }
  
  DllNode *temp;
  if(index == 0)
  {
    temp = m_head;
    if(m_length == 1)
    {
      m_head = NULL;
      m_tail = NULL;
    }
    else
    {
      m_head = m_head->next;
      m_head->prev = NULL;
    }
  }
  else if(index == (m_length -1))
  {
    temp = m_tail;
    m_tail->prev->next = NULL;
    m_tail = m_tail->prev;
  }
  else
  {
    temp = m_head;
    size_t i = 0;
    
    while(i != index)
    {
      temp = temp->next;
      ++i;
    }

    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;
  }
  delete temp;
  --m_length;
}


void DoublyLinkedList::print()
{
  DllNode *curr = m_head;
  while(curr != NULL)
  {
    std::cout << curr->data << std::endl;
    curr = curr->next;
  }
}