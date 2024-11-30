

#include "PmergeMe.hpp"


int main(int ac , char **av )
{
    (void)ac;
    (void)av;
    
    PmergeMe obj;
    try
    {
        obj.MYSort();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}