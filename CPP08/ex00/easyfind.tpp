

#include "easyfind.hpp"

#include <algorithm>
#include <iterator>

    template <class T>
    void easyfind(T p1 , int value)
    {


        typename T::const_iterator it = std::find(p1.begin(), p1.end(), value);
        if(it == p1.end())
        {
            std::cerr << "VALUE NOT FOUND" << std::endl;
            return ;
        }
        std::cout << *it << std::endl;
    }



