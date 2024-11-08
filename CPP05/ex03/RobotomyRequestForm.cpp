

#include "RobotomyRequestForm.hpp"

#include <ctime>

RobotomyRequestForm::RobotomyRequestForm():gradeSign(72) , gradeExec(45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):gradeSign(72) , gradeExec(45)
{
    this->target = target ;
    
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
{
    *this = obj;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    gradeExec = obj.gradeExec;
    gradeSign = obj.gradeSign;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
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


