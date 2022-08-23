#include <iostream>
#include "../include/119_stack.h"

std::string Stack::peek(void)
{
  return m_list.back();
}

void Stack::push(const std::string& value)
{
  m_list.push_back(value);
}

void Stack::pop(void)
{
  m_list.pop_back();
}

bool Stack::isEmpty(void)
{
  return m_list.empty();
}

void Stack::print(void)
{
  for(auto element : m_list)
  {
    std::cout << element << std::endl;
  }
}
