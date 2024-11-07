

#ifndef AFORM_HPP
#define AFORM_HPP


#include "Bureaucrat.hpp"

class AForm
{
public:
    virtual void execute(Bureaucrat const & executor) = 0;
    AForm();
    ~AForm();
private:
    unsigned int GradeSign;
    unsigned int GradeExec;
    bool _Sign;
};



#endif