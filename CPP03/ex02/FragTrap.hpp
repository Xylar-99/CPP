

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP


#include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{

public:
    FragTrap();
    FragTrap(const FragTrap &obj);
    ~FragTrap();
    FragTrap(std::string nn);
    FragTrap& operator=(const FragTrap &obj);
    void attack(const std::string& target) ;
    void highFivesGuys();
};




#endif