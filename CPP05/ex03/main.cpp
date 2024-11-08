

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat akaza(150 , "akaza");
	ShrubberyCreationForm obj("SHURU");
	
	obj.execute(akaza);	
	return (0);
}
