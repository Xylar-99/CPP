

#include "Serializer.hpp"



#include <iostream>



int main()
{
    Data pp;
   
   
   Data* ptr = &pp;
    uintptr_t intPtr = reinterpret_cast<uintptr_t>(ptr);


    std::cout << intPtr << std::endl;
}