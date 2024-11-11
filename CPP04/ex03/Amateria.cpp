

#include "Amateria.hpp"


AMateria::AMateria(std::string const &type)
{
    this->type = type;
}

AMateria::AMateria()
{
    type = "TEST";
}

AMateria::AMateria(const AMateria &obj)
{
    *this = obj;
}


AMateria::~AMateria()
{
    
}


AMateria & AMateria::operator=(const AMateria &obj)
{
    this->type = obj.type;
    return *this;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "TEST" << target.getName() << std::endl;
}


std::string const & AMateria::getType() const
{
    return this->type;
}
