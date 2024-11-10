

#include "Cure.hpp"



Cure::Cure()
{
    this->type = "cure";
}

Cure::Cure(const Cure &obj)
{
    *this = obj;
}

Cure & Cure::operator=(const Cure &obj)
{
    type = obj.type;
    return *this;
}

Cure::~Cure(){}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}


AMateria* Cure::clone() const
{

    Cure *ptr = new Cure();

    return ptr;

}
