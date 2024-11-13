

#include "ScalarConverter.hpp"


#include <iostream>

#include <cmath>

int main(int ac , char **av)
{
    if(ac != 2)
        return 1;
    ScalarConverter::convert(av[1]);
}