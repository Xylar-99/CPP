


#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>

struct data
{
  int value;
};



class Serializer
{

private: 
    Serializer();
    Serializer(const Serializer &obj);
    Serializer & operator=(const Serializer &obj);
    ~Serializer();

public:
  static uintptr_t serialize(data* ptr);
  static data* deserialize(uintptr_t raw);

};

#endif
