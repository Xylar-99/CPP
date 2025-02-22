

#include "RPN.hpp"



int main(int ac , char **av )
{
    try
    {
        if(ac != 2)
            throw(std::runtime_error("Error invalid args"));
        RPN obj(av[1]);

        obj.CheckString();

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
}