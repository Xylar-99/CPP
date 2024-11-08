


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
  void execute(Bureaucrat const & executor) const;

private:
unsigned int gradeSign;
unsigned int gradeExec;
std::string target;
};

#endif
