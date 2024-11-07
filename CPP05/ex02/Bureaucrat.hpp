

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "AForm.hpp"
# include <exception>
# include <iostream>

class Bureaucrat
{
  public:
	Bureaucrat(int NumberOfGrade, std::string NameOfBureaucrat);
	Bureaucrat();
	Bureaucrat(const Bureaucrat &obj);
	Bureaucrat &operator=(const Bureaucrat &obj);
	std::string getName();
	unsigned int getGrade();
	void SetIncrement();
	void SetDecrement();
	static void GradeTooLowException();
	static void GradeTooHighException();
	~Bureaucrat(){};
	
	void executeForm(AForm const &form);

  private:
	std::string name;
	unsigned int grade;
};

std::ostream &operator<<(std::ostream &os, Bureaucrat &obj);
#endif