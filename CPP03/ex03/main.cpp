

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{

{

    DiamondTrap *aa = new DiamondTrap("abdo");

    aa->attack("AKAZA");
    aa->whoAmI();
    delete aa;
}
// {

//     ClapTrap *aa = new DiamondTrap("abdo");

//     aa->attack("AKAZA");
    
//     delete aa;
// }
}