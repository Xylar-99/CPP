


// #include <cstdint>
#include <iostream>
#include "Serializer.hpp"



int main()
{
    int a = 32;
    int *ptr = &a;

    uintptr_t raw = Serializer::serialize(ptr);
    int *b = Serializer::deserialize(raw);

    std::cout << ptr << "        " << b << std::endl;
    std::cout << *ptr << "        " << *b << std::endl;

}