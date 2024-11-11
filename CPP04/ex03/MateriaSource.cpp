

#include "MateriaSource.hpp"

#include "Amateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#include <bits/stdc++.h>


MateriaSource::MateriaSource()
{
    index = 0;
}


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


void MateriaSource::learnMateria(AMateria *obj)
{
    if(index > 3)
        return ;
    ptr[index] = obj;
    index++;
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < index ; i++ )
    {
        if(!type.compare(ptr[i]->getType()))
            return ptr[i]->clone();
    }
    return NULL;
}

