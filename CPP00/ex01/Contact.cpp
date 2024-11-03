/* *************************************************************************** */
/*                 *#########                                                  */
/*                ##........../##           KWAK!                              */
/*              *#,.......,##....#######  /                                    */
/*              ##........./....##////##                                       */
/*    ##          ##...........,##((##                                         */
/*   #.###/        ##,..........*                                              */
/*  #(.....(######(###*........,##                                             */
/* ##.............................##      File    : Contact.cpp                */
/* ##.    __       __  o       __  ##                                          */
/* ##.   |_  |\ | | __ | |\ | |_    *#.   Created :                            */
/*  ##   |__ | \| |__| | | \| |__   ,#,             Invalid date               */
/*   ##.............................##                                         */
/*    /##........................*##      Updated : abquaoub                   */
/*       ###/................*###.                  2024/09/18 16:53:37        */
/*            ##############.                                                  */
/* *************************************************************************** */
#include "Contact.hpp"
#include <iomanip>
#include <iostream>
#include <cstdlib>



int Contact::getindex()
{
    return index;
}

void Contact::setindex(int ii)
{
    index = ii;
}

std::string Contact::getfirstname()
{
    return FirstName;
}

void Contact::setfirstname(std::string name)
{
    FirstName = name;
}



std::string Contact::getLastName()
{
    return LastName;
}

void Contact::setLastName(std::string name)
{
    LastName = name;
}



std::string Contact::getNickName()
{
    return NickName;
}

void Contact::setNickName(std::string name)
{
    NickName = name;
}



std::string Contact::getPhoneNumber()
{
    return PhoneNumber;
}

void Contact::setPhoneNumber(std::string name)
{
    PhoneNumber = name;
}

std::string Contact::getDarkestSecret()
{
    return DarkestSecret;
}

void Contact::setDarkestSecret(std::string name)
{
    DarkestSecret = name;
}


void ft_handel_out(std::string name)
{
	int len = name.size();
	name.resize(10, ' ');
	if(len > 10) name[9] = '.';
	std::cout << " " << std::setfill(' ') << std::setw(11) << name << " |";
}

void Contact::ft_print()
{
	std::cout << std::setiosflags(std::ios::left);
	std::cout << "|   " << getindex() + 1 << "   |";
	ft_handel_out(getfirstname());
	ft_handel_out(getLastName());
	ft_handel_out(getNickName());
	std::cout << "\n...................................................\n";

}

int ft_handel_err(std::string *str  , int (*fun_ptr)(int c))
{
	std::string ptr = *str;
	for(int i = 0 ; ptr[i] ; i++)
		if((fun_ptr &&  !fun_ptr(ptr[i])) && ptr[i] != ' ')
			return (std::cerr << "THIS IS FORMAT WRONG \n" , 1);
	if(ptr.empty() || ptr.find_last_not_of(" ") == ptr.npos) 
		return(std::cout << "THIS EMPTY STRING\n",1);
	else
		*str = ptr.substr(ptr.find_first_not_of(" ") ,ptr.find_last_not_of(" ") + 1);
	return 0;
}

int ft_err()
{
	std::cerr << "\nBYE!  " << std::endl;
	std::exit(1);
	return 1;
}


std::string ft_input(std::string out , int (*fun_ptr)(int c))
{

	std::string data;
	while(1)
	{
	std::cout << out ;
	if ((!std::getline(std::cin, data) && ft_err()) || !ft_handel_err(&data , fun_ptr)) break;
	
	}
	return data;
}

void ft_add(Contact *obj , int *index)
{
	
	obj->setfirstname(ft_input("FIRST NAME: " , isalpha));
	obj->setLastName(ft_input("LAST  NAME: " , isalpha));
	obj->setNickName(ft_input("NICK  NAME: " , isalnum));
	obj->setPhoneNumber(ft_input("PHONE  NBR: " , isdigit));
	obj->setDarkestSecret(ft_input("DARKSET SC: " , NULL));
	obj->setindex((*index % 8));
	(*index)++;
	return ;
}

