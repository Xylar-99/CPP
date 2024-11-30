

#include "RPN.hpp"



int main(int ac , char **av )
{
    if(ac != 2) return 1;

    RPN obj;
    try
    {
        obj._RPN(av[1]);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
}