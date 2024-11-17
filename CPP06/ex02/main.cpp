


#include <iostream>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    Base *ptr = generate();
    identify(ptr);
    identify(*ptr);


}