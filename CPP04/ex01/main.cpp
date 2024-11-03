

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
    
    const Animal *ptr[20] ;


    for(int i = 0; i < 20; i++)
    {
        while(i < 10)
        {
        ptr[i] = new Dog();
        std::cout << "---------" << std::endl;
        i++;
        }
        std::cout << "+++++++++" << std::endl;
        ptr[i] = new Cat();
    }

    std::cout << "/////////////////////////////" << std::endl;
    for(int i = 0 ; i < 20 ; i++)
    {
        delete ptr[i];
    }
   

   
}