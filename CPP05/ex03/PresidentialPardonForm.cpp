

#include "PresidentialPardonForm.hpp"
#include <ctime>

PresidentialPardonForm::PresidentialPardonForm() : gradeSign(25), gradeExec(5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : gradeSign(25),
	gradeExec(5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
{
	*this = obj;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	gradeExec = obj.gradeExec;
	gradeSign = obj.gradeSign;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() < this->gradeSign
		&& executor.getGrade() < this->gradeExec)
		std::cout << "Zaphod Beeblebrox informs that  " << target << "has been officially pardoned." << std::endl;
}
