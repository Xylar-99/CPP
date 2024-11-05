

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
    Animal *aa = new Cat();

    aa->makeSound();

    delete aa;
   
}