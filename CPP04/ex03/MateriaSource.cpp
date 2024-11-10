

#include "MateriaSource.hpp"

#include "Amateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(){}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
    *this = obj;
}

MateriaSource & MateriaSource::operator=(const MateriaSource &obj)
{
    (void)obj;
    return *this;
}

MateriaSource::~MateriaSource(){}


void MateriaSource::learnMateria(AMateria*)
{
    
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    AMateria *ptr;
    if(type.compare("ice"))
        ptr = new Ice();
    else if(type.compare("cure"))
        ptr = new Cure();
    else
        ptr = NULL;

    return ptr;
}

