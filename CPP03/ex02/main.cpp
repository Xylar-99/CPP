

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    {

    FragTrap aa("aa");
    aa.attack("AKAZA");
    aa.highFivesGuys();
    }
    {

        ClapTrap *aa = new FragTrap("aa");
        aa->attack("AKAZA");
        delete aa;
    }
    
}