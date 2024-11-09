

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>


class ClapTrap
{
public:
    ClapTrap();
    ClapTrap(const ClapTrap &obj);
    ClapTrap& operator=(const ClapTrap &obj);
    ClapTrap(std::string nn);
    virtual ~ClapTrap();
    virtual void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
protected:
    std::string name;
    int hit ;
    int energy ;
    int damage ;
private:
    int a;
};



#endif