



#include "Form.hpp"



int main() 
{
    {

    Bureaucrat akaza(100 , "AKAZA");
    Form DemonForm(akaza , 54);
    std::cout << DemonForm << std::endl;
    Bureaucrat muzan(2 , "MUZAN-SAMA");
    DemonForm.beSigned(muzan);
    DemonForm.signForm();
    }

    std::cout << "-----------------------------------------" << std::endl;
    {

    Bureaucrat akaza(1 , "AKAZA");
    Form DemonForm(akaza , 54);
    std::cout << DemonForm << std::endl;
    Bureaucrat muzan(2 , "MUZAN-SAMA");
    DemonForm.beSigned(muzan);
    DemonForm.signForm();
    }

    return 0;
}
