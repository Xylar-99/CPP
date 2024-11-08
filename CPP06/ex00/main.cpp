

#include "ScalarConverter.hpp"


#include <iostream>

int main()
{
    char * str("abdo");
    std::cout << static_cast<char>(str) << std::endl;
}