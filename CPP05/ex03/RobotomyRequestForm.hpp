


#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <iostream>

class RobotomyRequestForm : public AForm
{
public: 
  RobotomyRequestForm();
  RobotomyRequestForm(std::string target);
  RobotomyRequestForm(const RobotomyRequestForm &obj);
  RobotomyRequestForm & operator=(const RobotomyRequestForm &obj);
  ~RobotomyRequestForm();
  void execute(Bureaucrat const & executor) const;

private:
unsigned int gradeSign;
unsigned int gradeExec;
std::string target;

};

#endif
