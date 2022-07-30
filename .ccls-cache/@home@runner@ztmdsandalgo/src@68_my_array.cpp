#include <cstring>
#include <iostream>
#include "../include/68_my_array.h"

void my_array::print(void)
{
  for(int i = 0; i < length; ++i)
  {
      std::cout << data[i] << std::endl;
  }
}

size_t my_array::size(void)
{
  return length;
}

int32_t my_array::at(size_t index) 
{ 
  return data[index]; 
}

void my_array::push_back(int32_t value)
{
  if(length == capacity)
  {    
    size_t newCapacity = (capacity == 0) ? 1 : (capacity * 2);
    int32_t *tempData = new int32_t[newCapacity];

    if(capacity != 0)
    {
      std::memcpy(tempData, data, (capacity * 4));
      delete [] data;
    }
    data = tempData;
    capacity = newCapacity;
  }
  data[length] = value;
  ++length;  
}

void my_array::pop_back()
{
  if(length != 0)
  {
    --length;
  }
}

void my_array::erase(size_t index)
{
  if (index < length)
  {
    for(int i = (index + 1); i < length; ++i)
    {
      data[i-1] = data[i];
    }
    --length;
  }
}