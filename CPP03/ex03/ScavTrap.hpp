

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP


#include "ClapTrap.hpp"


class ScavTrap : virtual public ClapTrap
{

public:
    ScavTrap();
    ScavTrap(const ScavTrap &obj);
    virtual ~ScavTrap();
    ScavTrap(std::string nn);
    ScavTrap& operator=(const ScavTrap &obj);
    virtual void attack(const std::string& target) ;
    void guardGate();
private:
    std::string name;
};




#endif