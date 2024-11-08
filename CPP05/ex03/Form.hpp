
#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{

public:
    Form(Bureaucrat obj, int grade_exec );
    Form();
    // Form(const Form & obj);
    // Form & operator=(const Form & obj);
    ~Form();
    unsigned int getGrade() const;
    unsigned int getExec() const;
    std::string getName() const;
    void beSigned(Bureaucrat obj);
    void signForm();
private:
    const std::string Name;
    const unsigned int Grade_Sign;
    const unsigned int Grade_Exec;
    bool Signe;
};


std::ostream & operator<<(std::ostream &os , const Form &obj) ;

#endif