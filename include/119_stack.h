#ifndef STACK_H
#define STACK_H

#include <vector>
#include <string>

class Stack
{
public:
  std::string peek(void);
  void push(const std::string& value);
  void pop(void);
  bool isEmpty(void);
  void print(void);

private:
  std::vector<std::string> m_list;
};

#endif // STACK_H