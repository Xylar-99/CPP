

#include "Animal.hpp"


Animal::Animal():type("Animal")
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{

    std::cout << "Animal Copy  constructor called" << std::endl;
    
    *this = obj;

}   

Animal & Animal::operator=(const Animal &obj)
{
    if(this != &obj)
    {
        this->type = obj.type;
    }
    std::cout << "Animal Copy assignment operator calle" << std::endl;
    return *this;
}

std::string Animal::getType() const
{
    return type;
}
Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}
