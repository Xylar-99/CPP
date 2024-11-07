


#include <iostream>
#include "Bureaucrat.hpp"



int main() 
{
    Bureaucrat obj(10 , "MUZAN-SAMA");
    obj.SetDecrement();
    std::cout << obj << std::endl;
    obj.SetIncrement();
    std::cout << obj << std::endl;

    return 0;
}
