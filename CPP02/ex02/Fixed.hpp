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
    ~Fixed();
    Fixed (const Fixed &obj);

    Fixed& operator=(const Fixed& C);
    Fixed& operator++();
    Fixed& operator--();
    Fixed operator--(int);
    Fixed operator++(int);
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;

    static Fixed& max(Fixed& v1 , Fixed& v2);
    static const   Fixed& max(const Fixed& v1 ,const  Fixed& v2);
     static Fixed& min(Fixed& v1 , Fixed& v2);
    static const   Fixed& min(const Fixed& v1 ,const  Fixed& v2);

private:
    int value ;
    static const int fractional = 8;
};

Fixed operator+(const Fixed &other1 , const Fixed &other);
Fixed operator-(const Fixed &other1 , const Fixed &other);
Fixed operator*(const Fixed &other1 , const Fixed &other);
Fixed operator/(const Fixed &other1 , const Fixed &other);
std::ostream& operator<<(std::ostream& os, const Fixed& p) ;

#endif