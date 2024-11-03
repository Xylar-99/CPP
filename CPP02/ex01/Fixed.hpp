/* *************************************************************************** */
/*                 *#########                                                  */
/*                ##........../##           KWAK!                              */
/*              *#,.......,##....#######  /                                    */
/*              ##........./....##////##                                       */
/*    ##          ##...........,##((##                                         */
/*   #.###/        ##,..........*                                              */
/*  #(.....(######(###*........,##                                             */
/* ##.............................##      File    : Fixed.hpp                  */
/* ##.    __       __  o       __  ##                                          */
/* ##.   |_  |\ | | __ | |\ | |_    *#.   Created : abquaoub                   */
/*  ##   |__ | \| |__| | | \| |__   ,#,             2024/09/22 14:17:12        */
/*   ##.............................##                                         */
/*    /##........................*##      Updated : abquaoub                   */
/*       ###/................*###.                  2024/09/22 14:17:12        */
/*            ##############.                                                  */
/* *************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
    Fixed();
    Fixed(const int nn);
    Fixed(const float nn);
    Fixed (const Fixed &obj);
    Fixed& operator=(const Fixed& C);
    ~Fixed();
private:
    int value ;
    static const int fractional = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& p) ;

#endif