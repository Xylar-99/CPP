

#include "ClapTrap.hpp"


ClapTrap::ClapTrap():hit(10) , energy(10) , damage(0)
{
    name = "guest";
    std::cout << "ClapTrap Default constructor called" << std::endl;
};

ClapTrap::ClapTrap(std::string nn):hit(10) , energy(10) , damage(0)
{
    name = nn;
    std::cout << "ClapTrap Param constructor called" << std::endl;
};



ClapTrap::ClapTrap(const ClapTrap &obj)
{
    this->hit = obj.hit;
    this->energy = obj.energy;
    this->damage = obj.damage;
    this->name = obj.name;
    std::cout << "ClapTrap Copy constructor called" << std::endl;

}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj)
{
    if(this != &obj)
    {
        this->hit = obj.hit;
        this->energy = obj.energy;
        this->damage = obj.damage;
    }
    std::cout << "ClapTrap Copy assignment operator calle" << std::endl;

    return *this;
}



void ClapTrap::attack(const std::string& target)
{
     if(this->energy < 0 || this->hit < 0)
    {
        std::cout << " ClapTrap can’t do anythin" << std::endl;
        return ;
    }
    this->energy--;
    std::cout << "ClapTrap " << name << " attacks " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " takes " << amount << " damage!" << std::endl;
}


void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->energy < 0 || this->hit < 0)
    {
        std::cout << " ClapTrap can’t do anythin" << std::endl;
        return ;
    }
    this->energy--;
    std::cout << "ClapTrap " << name << " is repaired by " << amount << " health points!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
};