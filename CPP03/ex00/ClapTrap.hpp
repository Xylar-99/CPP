

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>


class ClapTrap
{
public:
    ClapTrap();
    ClapTrap(const ClapTrap &obj);
    ClapTrap& operator=(const ClapTrap &obj);
    ~ClapTrap();
    ClapTrap(std::string nn);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
private:
std::string name;
int hit ;
int energy ;
int damage ;

};



#endif