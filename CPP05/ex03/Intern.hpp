


#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "Form.hpp"

class Intern
{
public: 
	Intern();
	Intern(const Intern &obj);
  	Intern & operator=(const Intern &obj);
	Form * makeForm(std::string name , std::string target);
  	~Intern();
private:

};

#endif
