

#include "ShrubberyCreationForm.hpp"

#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): gradeSign(147) , gradeExec(137){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): gradeSign(147) , gradeExec(137)
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
{
    *this = obj;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
    gradeExec = obj.gradeExec;
    gradeSign = obj.gradeSign;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}



void write_tree(std::string target)
{


    std::string filename = target + "_shrubbery";


    std::ofstream file;

    file.open(filename.c_str() , std::ios::out);


    file << "      *" << std::endl;
    file << "     ***" << std::endl;
    file << "    *****" << std::endl;
    file << "   *******" << std::endl;
    file << "  *********" << std::endl;
    file << " ***********" << std::endl;    
    file << "    *****" << std::endl;
    file << "   *******" << std::endl;
    file << "  *********" << std::endl;
    file << " ***********" << std::endl;
    file << "   *******" << std::endl;
    file << "  *********" << std::endl;
    file << " ***********" << std::endl;
    file << "     |||" << std::endl;
    file << "     |||" << std::endl;
    file << "     |||" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{


    try
    {
        if(executor.getGrade() > this->gradeSign)
            write_tree(target);
        else
            error();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
   
}


