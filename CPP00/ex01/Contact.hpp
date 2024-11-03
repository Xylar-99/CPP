/* *************************************************************************** */
/*                 *#########                                                  */
/*                ##........../##           KWAK!                              */
/*              *#,.......,##....#######  /                                    */
/*              ##........./....##////##                                       */
/*    ##          ##...........,##((##                                         */
/*   #.###/        ##,..........*                                              */
/*  #(.....(######(###*........,##                                             */
/* ##.............................##      File    : Contact.hpp                */
/* ##.    __       __  o       __  ##                                          */
/* ##.   |_  |\ | | __ | |\ | |_    *#.   Created :                            */
/*  ##   |__ | \| |__| | | \| |__   ,#,             Invalid date               */
/*   ##.............................##                                         */
/*    /##........................*##      Updated : abquaoub                   */
/*       ###/................*###.                  2024/09/18 16:37:27        */
/*            ##############.                                                  */
/* *************************************************************************** */
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:
    int index;
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;
public:
    int getindex();
    void setindex(int i);
    std::string getfirstname();
    void setfirstname(std::string jj);
    std::string getLastName();
    void setLastName(std::string jj);
    std::string getNickName();
    void setNickName(std::string jj);
    std::string getPhoneNumber();
    void setPhoneNumber(std::string jj);
    std::string getDarkestSecret();
    void setDarkestSecret(std::string jj);
    void ft_print();

};
std::string ft_input(std::string out , int (*fun_ptr)(int c));
int ft_handel_err(std::string *str  , int (*fun_ptr)(int c));
int ft_err();
void ft_add(Contact *obj , int *index);

#endif