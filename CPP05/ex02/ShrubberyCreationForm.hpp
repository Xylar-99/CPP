


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
private:
unsigned int gradeSign;
unsigned int gradeExec;

};

#endif
