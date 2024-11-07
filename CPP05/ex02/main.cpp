

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat obj(10, "MUZAN-SAMA");
	obj.SetDecrement();
	std::cout << obj << std::endl;
	obj.SetIncrement();
	std::cout << obj << std::endl;
	return (0);
}
