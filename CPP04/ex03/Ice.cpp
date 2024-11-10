

#include "Ice.hpp"



Ice::Ice()
{
    this->type = "ice";
}

Ice::Ice(const Ice &obj)
{
    *this = obj;
}

Ice & Ice::operator=(const Ice &obj)
{
    type = obj.type;

    return *this;
}

Ice::~Ice(){}

AMateria* Ice::clone() const
{

    Ice *ptr = new Ice();

    return ptr;

}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
