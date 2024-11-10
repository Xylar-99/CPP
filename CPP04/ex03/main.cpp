


#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Amateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int	main(void)
{

	ICharacter *me = new Character("me");
	AMateria *obj = new Ice();
	me->equip(obj);
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	// me->use(1, *bob);
	delete bob;
	delete me;
	// return (0);
}