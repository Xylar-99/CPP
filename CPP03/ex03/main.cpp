

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{

    ClapTrap *aa = new DiamondTrap("abdo");

    aa->attack("AKAZA");

    delete aa;
}