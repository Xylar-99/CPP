


#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>

struct Data
{
  int value;
};



class Serializer
{
public: 
  Serializer();
  Serializer(const Serializer &obj);
  Serializer & operator=(const Serializer &obj);
  uintptr_t serialize(Data* ptr);
  Data* deserialize(uintptr_t raw);
  ~Serializer();
private:

};

#endif
