#ifndef QUEUE_LIST
#define QUEUE_LIST

#include <cstddef>
#include <string>

struct StrNode
{
  StrNode(const std::string& value) : data(value), next(NULL)
  {
  
  }

  std::string data;
  struct StrNode *next;
};

class QueueList
{
public:
  std::string& peek(void);
  void enqueue(const std::string& value);
  void dequeue(void); 
  void print(void);

private:
  StrNode *m_first = NULL;
  StrNode *m_last = NULL;
  size_t m_length = 0;
};

#endif //QUEUE_LIST