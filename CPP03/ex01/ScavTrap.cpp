

#include "ScavTrap.hpp"




ScavTrap::ScavTrap() : ClapTrap()
{

    this->hit = 100;
    this->energy = 50;
    this->damage = 20;
    std::cout << "ScavTrap Default constructor called" << std::endl;
};

ScavTrap::ScavTrap(std::string nn):ClapTrap(nn)
{
    this->hit = 100;
    this->energy = 50;
    this->damage = 20;
    std::cout << "ScavTrap Param constructor called" << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &obj)
{
    if(this != &obj)
    {
        this->hit = obj.hit;
        this->energy = obj.energy;
        this->damage = obj.damage;
    }
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;

    return *this;
}


void ScavTrap::attack(const std::string& target)
{
    if(this->energy < 0 || this->hit < 0)
    {
        std::cout << " ScavTrap can’t do anythin" << std::endl;
        return ;
    }
    this->energy--;
    std::cout << "ScavTrap " << name << " attacks " << target << std::endl;
}


void ScavTrap::guardGate()
{
    std::cout << "ScavTrap Gate keeper mode" << std::endl;
}


ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
};