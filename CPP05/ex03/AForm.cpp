

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(Bureaucrat obj, int grade_exec ):Name(obj.getName()) , Grade_Sign(obj.getGrade()) ,Grade_Exec(grade_exec)
{
}

AForm::AForm():Name("AKAZA") , Grade_Sign(20) ,Grade_Exec(44) {}

AForm::~AForm(){}

unsigned int AForm::getExec() const
{
    return Grade_Exec;
}

unsigned int AForm::getGrade() const
{
    return Grade_Sign;
}

std::string  AForm::getName() const
{
    return Name;
}


void AForm::beSigned(Bureaucrat obj)
{
    if(obj.getGrade() < this->Grade_Sign)
        this->Signe = true;
}

void AForm::signForm()
{
    if(Signe)
        std::cout << Name << " FORM IS SIGNED " << std::endl;
    else
        std::cout << Name << " FORM IS NOT SIGNED " << std::endl;
}




std::ostream & operator<<(std::ostream &os , const AForm &obj) 
{
    os << "NAME IS " << obj.getName() << " THE GRADE  " << obj.getGrade() ;
    return os;
}



void error()
{
    throw std::logic_error("Error");
}


bool AForm::getSign() const 
{
    return Signe;
}
