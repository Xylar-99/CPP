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
/*  ##   |__ | \| |__| | | \| |__   ,#,             2024/09/18 05:41:55        */
/*   ##.............................##                                         */
/*    /##........................*##      Updated : abquaoub                   */
/*       ###/................*###.                  2024/09/18 05:41:55        */
/*            ##############.                                                  */
/* *************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
}
{
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    // jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
}
return 0;
}