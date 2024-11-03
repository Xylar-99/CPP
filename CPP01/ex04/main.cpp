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
/* ##.   |_  |\ | | __ | |\ | |_    *#.   Created : abquaoub                   */
/*  ##   |__ | \| |__| | | \| |__   ,#,             2024/09/18 05:43:47        */
/*   ##.............................##                                         */
/*    /##........................*##      Updated : abquaoub                   */
/*       ###/................*###.                  2024/09/18 05:43:47        */
/*            ##############.                                                  */
/* *************************************************************************** */

#include <fstream>
#include <iostream>

std::string replace(std::string str, std::string s1, std::string s2)
{
	int		i;
	size_t	index;

	(void)s2;
	std::string rep = "";
	i = 0;
	while (str[i])
	{
		index = str.find(s1, i);
		if (index != str.npos)
		{
			rep += str.substr(i, index - i);
			i = index + s1.size();
			rep += s2;
		}
		else
		{
			rep += str.substr(i, str.size());
			break ;
		}
	}
	return (rep);
}

int Error()
{
	std::cerr << "ERROR"  << std::endl;
	return 1;
}

int	main(int ac, char **av)
{
	if (ac != 4) return (Error());
	// initialization
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string filename = av[1];
	std::string filerep = filename + ".replace";

	// open files
	std::fstream file;
	std::fstream filereplace;

	file.open(filename.c_str(), std::ios::in );
	if (!s1[0] || !file.is_open())return (file.close() , Error());
	filereplace.open(filerep.c_str(), std::ios::out );  

	// replace   
	std::string nn;
	while (std::getline(file, nn, '\0'))
		filereplace << replace(nn, s1, s2);

	file.close();
	filereplace.close();
}