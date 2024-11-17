

#include <iostream>
#include "whatever.hpp"

template <class T>

void swap(T &p1, T &p2)
{
    T p3 = p1;

    p1 = p2;
    p2 = p3;
}

template <class T>
T  min(T p1 , T p2)
{
    return(p1 < p2 ? p1 : p2);
}


template <class T>
T  max(T p1 , T p2)
{
    return(p1 > p2 ? p1 : p2);
}







int main( void ) 
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}

