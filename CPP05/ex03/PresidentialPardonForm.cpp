

#include "PresidentialPardonForm.hpp"

#include <ctime>

PresidentialPardonForm::PresidentialPardonForm():gradeSign(25) , gradeExec(5){}

PresidentialPardonForm::PresidentialPardonForm(std::string target):gradeSign(25) , gradeExec(5) , target(target)
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
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){}



void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    std::time_t now = std::time(NULL);
    try
    {
        if(executor.getGrade() > this->gradeSign)
        {
            if(now % 2)
                std::cout << target << " has been robotomized" << std::endl;
            else
                std::cout << target << " has not been robotomized" << std::endl;
        }
        else
            error();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}


