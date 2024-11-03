

#include "Cat.hpp"


Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat &obj)
{

    std::cout << "Cat Copy constructor called" << std::endl;
    *this = obj;
}

Cat & Cat::operator=(const Cat &obj)
{
    if(this != &obj)
        this->type = obj.type;
    std::cout << "Cat Copy assignment operator calle" << std::endl;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Cat :  Meow Meow" << std::endl;
}
Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}
