


#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP


#include "AForm.hpp"
#include <iostream>

class ShrubberyCreationForm : public AForm
{
public: 
  ShrubberyCreationForm();
  ShrubberyCreationForm(std::string target);
  ShrubberyCreationForm(const ShrubberyCreationForm &obj);
  ShrubberyCreationForm & operator=(const ShrubberyCreationForm &obj);
  ~ShrubberyCreationForm();
  void execute(Bureaucrat const & executor) const;

private:
unsigned int _gradeSign;
unsigned int _gradeExec;
std::string target;

};


void error();
#endif
