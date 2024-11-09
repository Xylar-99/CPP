

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{

    this->hit = 100;
    this->energy = 100;
    this->damage = 30;
    std::cout << "FragTrap Default constructor called" << std::endl;
};

FragTrap::FragTrap(std::string nn):ClapTrap(nn)
{
    this->hit = 100;
    this->energy = 100;
    this->damage = 30;
    std::cout << "FragTrap Param constructor called" << std::endl;
};

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &obj)
{
    if(this != &obj)
    {
        this->hit = obj.hit;
        this->energy = obj.energy;
        this->damage = obj.damage;
    }
    std::cout << "FragTrap Copy assignment operator called" << std::endl;

    return *this;
}


void FragTrap::attack(const std::string& target)
{
    if(this->energy < 0 || this->hit < 0)
    {
        std::cout << " FragTrap can’t do anythin" << std::endl;
        return ;
    }
    this->energy--;
    std::cout << "FragTrap " << name << " attacks " << target << std::endl;
}


void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap  everyone!  Let's celebrate our wins and spread the good vibes!" << std::endl;
}


FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
};

void FragTrap::test()
{
    std::cout << "hello" << std::endl;
}