

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{


	const Animal *j = new Dog();
	delete j; // should not create a leak
	std::cout << "---------------------" << std::endl;
	const Animal *i = new Cat();
	delete i;
	return (0);
}