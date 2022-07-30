#include <iostream>
#include "../include/80_hash_table.h"

void HashTable::set(std::string key, int32_t value)
{
  size_t index = _hash(key);
  for(size_t i = 0; i < m_hash_table[index].size(); ++ i)
  {
    if(m_hash_table[index][i].m_key == key)
    {
      m_hash_table[index][i].m_data = value;
      return;
    }
  }

  m_hash_table[index].push_back(HashNode(key, value));
  return;
}

int32_t HashTable::get(std::string key)
{
  size_t index = _hash(key);
  for(size_t i = 0; i < m_hash_table[index].size(); ++ i)
  {
    if(m_hash_table[index][i].m_key == key)
    {
      return m_hash_table[index][i].m_data;
    }
  }
  set(key, 0);  
  return 0;
}

void HashTable::keys(void)
{
  for(size_t index = 0; index < m_size; ++index)
  {
    for(size_t j = 0; j < m_hash_table[index].size(); ++ j)
    {
      std::cout << m_hash_table[index][j].m_key << std::endl;
    }
  }
}