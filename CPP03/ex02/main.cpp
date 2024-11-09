

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


#include <iostream>



 
int main()
{
    
    ClapTrap *aa = new FragTrap("akaza");

    aa->attack("aa");

    delete aa;
    
}