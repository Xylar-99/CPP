


#include <iostream>
#include "Bureaucrat.hpp"



int main() 
{
    {

    Bureaucrat obj(-1 , "MUZAN-SAMA");
    std::cout << obj << std::endl;
    obj.SetDecrement(); 
    std::cout << obj << std::endl;

    }
    std::cout << "----------------------------------------------------------" << std::endl;
    {

    Bureaucrat obj(150 , "MUZAN-SAMA");
    std::cout << obj << std::endl;
    obj.SetIncrement();
    std::cout << obj << std::endl;
    }
    return 0;
}
