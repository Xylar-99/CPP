

#include "WrongCat.hpp"


WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{

    std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = obj;
}

WrongCat & WrongCat::operator=(const WrongCat &obj)
{
    if(this != &obj)
        this->type = obj.type;
    std::cout << "WrongCat Copy assignment operator calle" << std::endl;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat :  Meow Meow" << std::endl;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}
