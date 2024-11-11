

#include "Dog.hpp"


Dog::Dog()
{
    type = "Dog";
    ptr = new Brain();

    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog &obj)
{

    std::cout << "Dog Copy constructor called" << std::endl;
    *this = obj;
}

Dog & Dog::operator=(const Dog &obj)
{
    if(this != &obj)
    {
        this->ptr = new Brain(*obj.ptr);
        this->type = obj.type;
    }
    std::cout << "Dog Copy assignment operator calle" << std::endl;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog :  Woof! Woof!" << std::endl;
}
Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    delete ptr;

}
