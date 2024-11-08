
#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>

#include "Bureaucrat.hpp"

class AForm
{

public:
    AForm(Bureaucrat obj, int grade_exec );
    AForm();
    // AForm(const AForm & obj);
    // AForm & operator=(const AForm & obj);
    ~AForm();
    void beSigned(Bureaucrat obj);
    unsigned int getGrade() const;
    unsigned int getExec() const;
    bool getSign() const ;
    std::string getName() const;
    void signForm();
    virtual void execute(Bureaucrat const & executor) const = 0;

private:
    const std::string Name;
    const unsigned int Grade_Sign;
    const unsigned int Grade_Exec;
    bool Signe;
};

void error();
std::ostream & operator<<(std::ostream &os , const AForm &obj) ;

#endif