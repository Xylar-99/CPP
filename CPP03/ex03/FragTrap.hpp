

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP


#include "ClapTrap.hpp"


class FragTrap : virtual public ClapTrap
{

public:
    FragTrap();
    FragTrap(const FragTrap &obj);
    virtual ~FragTrap();
    FragTrap(std::string nn);
    FragTrap& operator=(const FragTrap &obj);
    virtual  void attack(const std::string& target);
    void highFivesGuys();
};




#endif