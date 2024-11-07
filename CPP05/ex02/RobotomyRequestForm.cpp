

#include "RobotomyRequestForm.hpp"



RobotomyRequestForm::RobotomyRequestForm():gradeSign(72) , gradeExec(45){}

RobotomyRequestForm::RobotomyRequestForm(std::string target):gradeSign(72) , gradeExec(45)
{
    
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
{
    *this = obj;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    gradeExec = obj.gradeExec;
    gradeSign = obj.gradeSign;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

