#ifndef MY_ARRAY_H
#define MY_ARRAY_H

#include<cstdint>
#include<cstddef>

class my_array {
public:
  my_array() : data(NULL), length(0), capacity(0) {}

  ~my_array() {
    if (data != NULL) {
      delete[] data;
      length = 0;
      capacity = 0;
    }
  }

  void print(void);
  size_t size(void);
  int32_t at(size_t index);
  void push_back(int32_t value);
  void pop_back(); 
  void erase(size_t index);

private:
  int32_t *data;
  size_t length;
  size_t capacity;
};

#endif // MY_ARRAY_H