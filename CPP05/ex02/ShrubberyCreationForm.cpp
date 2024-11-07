

#include "ShrubberyCreationForm.hpp"



ShrubberyCreationForm::ShrubberyCreationForm(): gradeSign(147) , gradeExec(137){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): gradeSign(147) , gradeExec(137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
{
    *this = obj;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
    gradeExec = obj.gradeExec;
    gradeSign = obj.gradeSign;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

