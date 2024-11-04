

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
    // {

    // Cat bb;
    // Cat aa(bb);

    // std::cout << "the Type is " << aa.getType() << std::endl;
    // }
    {


    int N_of_Animals = 4;

    const Animal *ptr[N_of_Animals] ;


    for(int i = 0; i < N_of_Animals; i++)
    {
        while(i < (N_of_Animals/ 2))
        {
        ptr[i] = new Dog();
        std::cout << "---------" << std::endl;
        i++;
        }
        std::cout << "+++++++++" << std::endl;
        ptr[i] = new Cat();
    }

    std::cout << "////////////////////////////////////////////////////////////////////////////" << std::endl;
    for(int i = 0 ; i < N_of_Animals ; i++)
    {
        delete ptr[i];
    }
   
    }

   
}