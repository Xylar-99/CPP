
// #define _GLIBCXX_USE_CXX11_ABI 0

#include <vector>
#include <iostream>
#include "easyfind.hpp"
#include <algorithm>



template <class T>
void easyfind(T p1 , int value)
{


    typename T::const_iterator it = std::find(p1.begin(), p1.end(), value);

    if(it == p1.end())
        std::cout << "value not found" << std::endl;
    else
        std::cout << "value  found" << std::endl;

    
}


int main()
{
    std::vector<int> arr;
    arr.push_back(32);
    arr.push_back(0);
    arr.push_back(3);
    arr.push_back(4);

    easyfind(arr , 3);
    easyfind(arr , 355);


    
}