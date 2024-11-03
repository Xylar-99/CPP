

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
    {

    const WrongAnimal *ptr = new WrongCat;

    std::cout << ptr->getType()  << std::endl;

    delete ptr;
    }

    {

    const Animal *ptr = new Cat;

    std::cout << ptr->getType()  << std::endl;

    delete ptr;
    }
}