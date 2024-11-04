

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
    {

    const WrongAnimal *ptr = new WrongCat;

    std::cout << ptr->getType()  << std::endl;
    ptr->makeSound();
    delete ptr;
    }

    std::cout << "++++++++++++++++++++++++++++++++++++++++++" << std::endl;

    {

    const Animal *ptr = new Cat;

    std::cout << ptr->getType()  << std::endl;
        ptr->makeSound();
    delete ptr;
    }
}