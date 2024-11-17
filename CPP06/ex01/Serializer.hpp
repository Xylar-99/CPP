


#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>

// struct Data
// {
//   int value;
// };



class Serializer
{

public: 
    Serializer();
    Serializer(const Serializer &obj);
    Serializer & operator=(const Serializer &obj);
    ~Serializer();

public:
  static uintptr_t serialize(int* ptr);
  static int* deserialize(uintptr_t raw);

};

#endif
