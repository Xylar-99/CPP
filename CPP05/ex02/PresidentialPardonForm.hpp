


#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm
{
public: 
  PresidentialPardonForm();
  PresidentialPardonForm(std::string target);
  PresidentialPardonForm(const PresidentialPardonForm &obj);
  PresidentialPardonForm & operator=(const PresidentialPardonForm &obj);
  ~PresidentialPardonForm();
private:
unsigned int gradeExec;
unsigned int gradeSign;
};

#endif
