

#include "Character.hpp"

#include "Ice.hpp"
#include "Cure.hpp"


Character::Character() : name("AKAZA")
{
    index = 0;
}

Character::Character(std::string name)
{
    index = 0;
    this->name = name;
}


Character::Character(const Character &obj)
{
    *this = obj;
}

Character & Character::operator=(const Character &obj)
{
    this->name = obj.name;
    return *this;
}

Character::~Character()
{
}


std::string const & Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{

    ptr[index] = m;
    if(m)
        index++;
}

void Character::unequip(int idx)
{
    ptr[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if(idx > index || !ptr[idx])
    {
        std::cout << "THIS SLOT NOT FOUND!" << std::endl;
        return ;
    }
    ptr[idx]->use(target);
}





