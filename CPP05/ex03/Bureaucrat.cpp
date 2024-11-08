

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int Number_of_grade,
	std::string NameOfBureaucrat) : name(NameOfBureaucrat),
	grade(Number_of_grade)
{
	try
	{
		if (Number_of_grade < 1)
			GradeTooHighException();
		else if (Number_of_grade > 150)
			GradeTooLowException();
	}
	catch (const std::exception &e)
	{
		grade = 150;
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat() : name("AKAZA"), grade(150)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	*this = obj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	this->name = obj.name;
	grade = obj.grade;
	return (*this);
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (os);
}

std::string Bureaucrat::getName() const
{
	return (name);
}

unsigned int Bureaucrat::getGrade() const
{
	return (grade);
}

void Bureaucrat::SetDecrement()
{
	try
	{
		if (grade == 150)
			GradeTooLowException();
		else
			grade++;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void Bureaucrat::SetIncrement()
{
	try
	{
		if (grade == 1)
			GradeTooHighException();
		else
			grade--;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void Bureaucrat::GradeTooLowException()
{
	throw std::out_of_range("Grade is too low! It must be between 1 and 150.");
}

void Bureaucrat::GradeTooHighException()
{
	throw std::out_of_range("Grade is too hight! It must be between 1 and 150.");
}


void Bureaucrat::executeForm(AForm const  &form)
{

	if(form.getSign())
		std::cout << name << " executed "  << std::endl;
	else
		std::cout << name << " not executed "  << std::endl;
}
