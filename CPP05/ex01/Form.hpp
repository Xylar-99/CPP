
#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
private:
    const std::string Name;
    bool Signe;
    const int Grade_Sign;
    const int Grade_Exec;
public:
    void beSigned(Bureaucrat obj);
    Form();
    ~Form();
};


#endif