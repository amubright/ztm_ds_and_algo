#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

struct HashNode
{
  HashNode(std::string key, int32_t data) : m_key(key), m_data(data) 
  {
    
  }

  std::string m_key;
  int32_t m_data;  
};
// custom hash table with strings as keys and integer as value.
class HashTable
{
public:
  HashTable(size_t size) : m_size(size), m_hash_table(new std::vector<HashNode> [size])
  {
    
  }

  ~HashTable()
  {
    delete[] m_hash_table;    
  }

  void set(std::string, int32_t value);
  int32_t get(std::string);
  void keys(void);

private:
  size_t _hash(std::string key)
  {
    size_t hash = 0;
    for(size_t i = 0; i < key.length(); ++i)
    {
      hash = (hash + (key[i] * i)) % m_size;
    }
    return hash;
  }

  size_t m_size;
  std::vector<HashNode>* m_hash_table;
};

#endif //HASH_TABLE_H