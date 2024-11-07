

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(Bureaucrat obj, int grade_exec ):Name(obj.getName()) , Grade_Sign(obj.getGrade()) ,Grade_Exec(grade_exec)
{
}

Form::Form():Name("AKAZA") , Grade_Sign(20) ,Grade_Exec(44) {}

Form::~Form(){}

unsigned int Form::getExec() const
{
    return Grade_Exec;
}

unsigned int Form::getGrade() const
{
    return Grade_Sign;
}

std::string  Form::getName() const
{
    return Name;
}


void Form::beSigned(Bureaucrat obj)
{
    if(obj.getGrade() < this->Grade_Sign)
        this->Signe = true;
}

void Form::signForm()
{
    if(Signe)
        std::cout << Name << " FORM IS SIGNED " << std::endl;
    else
        std::cout << Name << " FORM IS NOT SIGNED " << std::endl;
}




std::ostream & operator<<(std::ostream &os , const Form &obj) 
{
    os << "NAME IS " << obj.getName() << " THE GRADE  " << obj.getGrade() ;
    return os;
}


