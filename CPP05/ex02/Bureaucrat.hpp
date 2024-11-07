

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <iostream>

class Bureaucrat
{
  public:
	Bureaucrat(int NumberOfGrade , std::string NameOfBureaucrat);
	std::string getName();
	int getGrade();
	void SetIncrement();
	void SetDecrement();
	const char *GradeTooLowException();
	const char *GradeTooHighException();
	~Bureaucrat(){};

  private:
	const std::string name;
	int grade;
};


std::ostream & operator<<(std::ostream &os ,  Bureaucrat &obj);
#endif