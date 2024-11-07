


#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class AForm
{
public: 
    AForm();
    AForm(const AForm &obj);
    AForm & operator=(const AForm &obj);
    void execute(Bureaucrat const & executor) const;
    void beSigned(Bureaucrat obj);
  ~AForm();
private:
    unsigned int GradeSign;
    unsigned int GradeExec;
    bool _Sign;

};

#endif
