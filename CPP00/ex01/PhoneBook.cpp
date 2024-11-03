/* *************************************************************************** */
/*                 *#########                                                  */
/*                ##........../##           KWAK!                              */
/*              *#,.......,##....#######  /                                    */
/*              ##........./....##////##                                       */
/*    ##          ##...........,##((##                                         */
/*   #.###/        ##,..........*                                              */
/*  #(.....(######(###*........,##                                             */
/* ##.............................##      File    : PhoneBook.cpp              */
/* ##.    __       __  o       __  ##                                          */
/* ##.   |_  |\ | | __ | |\ | |_    *#.   Created :                            */
/*  ##   |__ | \| |__| | | \| |__   ,#,             Invalid date               */
/*   ##.............................##                                         */
/*    /##........................*##      Updated : abquaoub                   */
/*       ###/................*###.                  2024/09/18 19:48:11        */
/*            ##############.                                                  */
/* *************************************************************************** */
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>
#include <stdlib.h>


void PhoneBook::ft_Search(int i)
{
	std::cout << "...................................................\n";
	std::cout << "| "
				<< "Index"
				<< " |"
				<< "  FirstNAME  "
				<< "|"
				<< "  LastNAME   "
				<< "|"
				<< "  NickNAME   "
				<< "|\n";
	std::cout << "...................................................\n";
	for (int j = 0; j < i && j < 8; j++)
		obj[j].ft_print();

	std::string ind;

	
	ind = ft_input("ENTER INDEX : " , isdigit);
	

	int num = std::atoi(ind.c_str());
	if(num < 1 || num > 8 ||ind.size() > 3 )
	{
		std::cerr << "INVALID INDEX\n";
		return ;
	}
	if(num - 1 < i)
	{
	num--;
	std::cout << "FIRSTNAME    : " << obj[num].getfirstname() << std::endl;
	std::cout << "LASTNAME     : " << obj[num].getLastName() << std::endl;
	std::cout << "NICKNAME     : " << obj[num].getNickName() << std::endl;
	std::cout << "PHONE NUMBER : " << obj[num].getPhoneNumber() << std::endl;
	std::cout << "DARKSET      : " << obj[num].getDarkestSecret() << std::endl;
	}
	else
		std::cout << "THIS IS PHONE INFO NOT EXIST\n\n";

}
