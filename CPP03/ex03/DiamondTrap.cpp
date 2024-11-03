

#include "DiamondTrap.hpp"




DiamondTrap::DiamondTrap()
{
    name = "Guest";
    ClapTrap::name = name + "_clap_name";
    hit = FragTrap::hit;
    damage = FragTrap::damage;
    energy = ScavTrap::energy;
    std::cout << "DiamondTrap Default  constructor called" << std::endl;
};

DiamondTrap::DiamondTrap(const DiamondTrap &obj) :FragTrap(obj)
{
    std::cout << "DiamondTrap Copy  constructor called" << std::endl;

}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap &obj)
{
    if(this != &obj)
    {
        this->hit = obj.hit;
        this->energy = obj.energy;
        this->damage = obj.damage;
    }
    std::cout << "DiamondTrap Copy assignment operator called" << std::endl;

    return *this;
}


DiamondTrap::DiamondTrap(std::string nn):ClapTrap::ClapTrap(nn)
{
    hit = FragTrap::hit;
    damage = FragTrap::damage;
    energy = ScavTrap::energy;
    name = nn;
    ClapTrap::name = name + "_clap_name";

    std::cout << "DiamondTrap Param constructor called" << std::endl;
};


void DiamondTrap::whoAmI()
{
    std::cout << "the name of DiamondTrap is " << this->name << " name of ClapTrap is "  << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
};

void  DiamondTrap::attack(const std::string &nn) 
{
    ScavTrap::attack(nn);
}
