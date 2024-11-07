

#include "PresidentialPardonForm.hpp"



PresidentialPardonForm::PresidentialPardonForm():gradeSign(25) , gradeExec(5){}

PresidentialPardonForm::PresidentialPardonForm(std::string target):gradeSign(25) , gradeExec(5)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
{
    *this = obj;
}
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    gradeExec = obj.gradeExec;
    gradeSign = obj.gradeSign;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

