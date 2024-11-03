

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{

public:
    void attack(const std::string& target) ;
    DiamondTrap(std::string nn);
    DiamondTrap(const DiamondTrap &obj);
    DiamondTrap &operator=(const DiamondTrap &obj);
    DiamondTrap();
    ~DiamondTrap();
    void whoAmI();
private:
    std::string name;
    int hit;
    int energy ;
    int damage;
};



#endif