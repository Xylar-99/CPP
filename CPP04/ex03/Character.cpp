

#include "Character.hpp"

#include "Ice.hpp"
#include "Cure.hpp"


Character::Character() : name("AKAZA")
{
    ptr  = new Ice[4];

}

Character::Character(std::string name)
{
    this->name = name;
    ptr  = new Cure[4];
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
    // delete ptr;
}


std::string const & Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{

    // problem here 
    (void)m;
    *ptr[0] = new Ice();
}

void Character::unequip(int idx)
{
    (void)idx;
}

void Character::use(int idx, ICharacter& target)
{

    ptr[idx].use(target);
}





