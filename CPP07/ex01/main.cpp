#include "iter.hpp"
#include <iostream>


template <class T>

T funcptr(T &p1)
{
    return ++p1;
}


template <class T>
void Iter(T add[] , unsigned int size , T (*funcptr)(T &))
{
    for(unsigned int  i = 0; i < size  ; i++)
        funcptr(add[i]);
}

int main()
{
    {

    int arr[5] = {1 , 2, 3 ,4 , 5};
    Iter(arr , 5 , funcptr);
    for(int i = 0; i < 5; i++)
        std::cout << arr[i] << std::endl;
    }
    std::cout << "+++++++++++++++++++++" << std::endl;
    {
    char arr[5] = {'1' , '2', '3' ,'4' , '5'};
    
    Iter(arr , 5 , funcptr);

    for(int i = 0; i < 5; i++)
        std::cout << arr[i] << std::endl;
    }
}