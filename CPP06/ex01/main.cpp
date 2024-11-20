


// #include <cstdint>
#include <iostream>
#include "Serializer.hpp"



int main()
{
    data a ;
    a.value = 32;
    data *ptr = &a;
    uintptr_t raw = Serializer::serialize(ptr);
    data *b = Serializer::deserialize(raw);

    std::cout << ptr << "        " << b << std::endl;
    std::cout << ptr->value << "        " << b->value << std::endl;

}