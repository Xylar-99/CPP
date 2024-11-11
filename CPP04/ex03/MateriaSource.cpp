

#include "MateriaSource.hpp"

#include "Amateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#include <bits/stdc++.h>


MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4;i++)
    {
        ptr[i] = NULL;
    }
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

    for(int i = 0; i < 4; i++)
    {
        if(!ptr[i])
        {
            ptr[i] = obj;
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4 ; i++ )
    {
        if(ptr[i] && !type.compare(ptr[i]->getType()))
            return ptr[i]->clone();
    }
    return NULL;
}

