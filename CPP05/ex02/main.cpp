

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat akaza(4, "akaza");
	{
		ShrubberyCreationForm obj("MUZAN-SAMA");
		obj.execute(akaza);
	}
	{
		RobotomyRequestForm obj("MUZAN-SAMA");
		obj.execute(akaza);
	}
	{
		PresidentialPardonForm obj("MUZAN-SAMA");
		obj.execute(akaza);
		akaza.executeForm(obj);
	}

	return (0);
}
