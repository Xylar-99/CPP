/* *************************************************************************** */
/*                 *#########                                                  */
/*                ##........../##           KWAK!                              */
/*              *#,.......,##....#######  /                                    */
/*              ##........./....##////##                                       */
/*    ##          ##...........,##((##                                         */
/*   #.###/        ##,..........*                                              */
/*  #(.....(######(###*........,##                                             */
/* ##.............................##      File    : main.cpp                   */
/* ##.    __       __  o       __  ##                                          */
/* ##.   |_  |\ | | __ | |\ | |_    *#.   Created :                            */
/*  ##   |__ | \| |__| | | \| |__   ,#,             Invalid date               */
/*   ##.............................##                                         */
/*    /##........................*##      Updated : a3\\zbouaoub                   */
/*       ###/................*###.                  2024/09/18 17:05:27        */
/*            ##############.                                                  */
/* *************************************************************************** */
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <stdlib.h>

int	main(void)
{
	PhoneBook	crappy;
	int			i;
	std::string cmd;
	i = 0;
	while (1)
	{
		std::cout << "ENTER COMMAND : ";
		if (!std::getline(std::cin, cmd)) return (ft_err() ,1);
		if (!cmd.compare("ADD")) ft_add(&crappy.obj[i % 8], &i);
		else if (!cmd.compare("SEARCH")) crappy.ft_Search(i);
		else if (!cmd.compare("EXIT")) return (0);
		else std::cout << "THIS IS INPUT INVALID\n";
	}
	
}
 
