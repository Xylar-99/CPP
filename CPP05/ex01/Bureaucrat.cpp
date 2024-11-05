

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int Number_of_grade , std::string NameOfBureaucrat):name(NameOfBureaucrat) , grade(Number_of_grade)
{
}

std::string Bureaucrat::getName()
{
	return (name);
}

void Bureaucrat::SetDecrement()
{
	try
	{
		if(grade == 150)
            throw std::exception();
        else
            grade++;
	}
	catch (std::exception &e)
	{
        std::cout << this->GradeTooLowException() << std::endl;
	}

	
}

void Bureaucrat::SetIncrement()
{
    try
	{
		if(!grade)
            throw std::exception();
        else
	        grade--;
	}
	catch (std::exception &e)
	{
        std::cout << this->GradeTooHighException() << std::endl;
	}
}

int Bureaucrat::getGrade()
{
	return (grade);
}

const char *Bureaucrat::GradeTooLowException()
{
	static std::string str = "Grade is too low! It must be between 0 and 150.";
	return (str.c_str());
}

const char *Bureaucrat::GradeTooHighException()
{
	static std::string str = "Grade is too high! It must be between 0 and 150.";
	return (str.c_str());
}

std::ostream & operator<<(std::ostream &os , Bureaucrat &obj)
{
	os <<  obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (os);
}
