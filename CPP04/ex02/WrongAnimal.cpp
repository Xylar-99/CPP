

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal():type("WrongAnimal")
{
    type = "WrongAnimal";
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{

    std::cout << "WrongAnimal Copy  constructor called" << std::endl;
    
    *this = obj;

}   

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &obj)
{
    if(this != &obj)
    {
        this->type = obj.type;
    }
    std::cout << "WrongAnimal Copy assignment operator calle" << std::endl;
    return *this;
}
void WrongAnimal::makeSound() const
{
    std::cout << "Sound of WrongAnimal" << std::endl;
}
std::string WrongAnimal::getType() const
{
    return type;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}
