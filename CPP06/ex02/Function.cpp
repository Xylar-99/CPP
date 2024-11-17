
#include "Base.hpp"
#include "A.hpp"
#include "C.hpp"
#include "B.hpp"

#include <ctime>

#include <iostream>

Base * generate(void)
{

    int flag  = time(NULL) % 3;

    switch (flag)
    {
    case 0:
        return (new A);    
    case 1:
        return (new B);
    case 2:
        return (new C);
    }
    return NULL;
}


void identify(Base* p)
{
    A* aa = dynamic_cast<A *>(p);
    B* bb = dynamic_cast<B *>(p);
    C* cc = dynamic_cast<C *>(p);


    if(aa)
        std::cout << "A" << std::endl;
    if(bb)
        std::cout << "B" << std::endl;
    if(cc)
        std::cout << "C" << std::endl;

}



void identify(Base& p)
{

    try
    {
        if( &(dynamic_cast<A &>(p)) == &p)
        {
            std::cout << "A" << std::endl;
            return ;
        }
    }
    catch(...)
    {
        
    }
    try
    {
        if( &(dynamic_cast<B &>(p)) == &p)
        {
            std::cout << "B" << std::endl;
            return ;
        }
    }
    catch(...)
    {
        
    }
    try
    {
        if( &(dynamic_cast<C &>(p)) == &p)
        {
            std::cout << "C" << std::endl;
            return ;
        }
    }
    catch(...)
    {
        
    }
    
    

}
