/* *************************************************************************** */
/*                 *#########                                                  */
/*                ##........../##           KWAK!                              */
/*              *#,.......,##....#######  /                                    */
/*              ##........./....##////##                                       */
/*    ##          ##...........,##((##                                         */
/*   #.###/        ##,..........*                                              */
/*  #(.....(######(###*........,##                                             */
/* ##.............................##      File    : Harl.cpp                   */
/* ##.    __       __  o       __  ##                                          */
/* ##.   |_  |\ | | __ | |\ | |_    *#.   Created : abquaoub                   */
/*  ##   |__ | \| |__| | | \| |__   ,#,             2024/09/18 05:43:54        */
/*   ##.............................##                                         */
/*    /##........................*##      Updated : abquaoub                   */
/*       ###/................*###.                  2024/09/18 05:43:54        */
/*            ##############.                                                  */
/* *************************************************************************** */

#include "Harl.hpp"

    void (Harl::*ptrdebug)();


void Harl::debug( void )
{
    std::cout << "\033[33m" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << "\033[33m" << "\033[0m" << std::endl;
}

void Harl::w( void )
{
    std::cout << "\033[33m" << "hello world" << "\033[33m" << "\033[0m" << std::endl;
}
void Harl::info( void )
{
        std::cout << "\033[32m" << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << "\033[32m" << "\033[0m" << std::endl;
}
void Harl::warning( void )
{
    std::cout  << "\033[38;5;214m"  << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << "\033[38;5;214m"  << "\033[0m" << std::endl;

}
void Harl::error( void )
{
    std::cout  << "\033[31m" << "This is unacceptable! I want to speak to the manager now."  <<"\033[31m" << "\033[0m" << std::endl;
}

void Harl::complain( std::string level )
{
    int res = 0;
    void (Harl::*ptrdebug)();
    ptrdebug = &Harl::debug;

    void (Harl::*ptrinfo)();
    ptrinfo = &Harl::info;

    void (Harl::*ptrwarning)();
    ptrwarning = &Harl::warning;

    void (Harl::*ptrerror)();
    ptrerror = &Harl::error;

    
    res += !level.compare("DUBG")  + !level.compare("INFO") * 2;
    res += !level.compare("WARNING") * 3 + !level.compare("ERROR") * 4;

switch(res) 
{
    case 1:
        (this->*ptrdebug)();
        break;
    case 2:
        (this->*ptrinfo)();
        break;
    case 3:
        (this->*ptrwarning)();
        break;
    case 4:
        (this->*ptrerror)();
        break;
    default:
        std::cerr << "INVALID LEVEL" << std::endl;
}

}