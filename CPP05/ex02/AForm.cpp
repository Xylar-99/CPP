

#include "AForm.hpp"



AForm::AForm(){}

AForm::AForm(const AForm &obj){}

AForm & AForm::operator=(const AForm &obj){}

AForm::~AForm(){}



void AForm::beSigned(Bureaucrat obj)
{
    if(obj.getGrade() < this->GradeSign)
        this->_Sign = true;
}


void AForm::execute(Bureaucrat const & executor) const
{
    
}

