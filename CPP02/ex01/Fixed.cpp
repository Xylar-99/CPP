/* *************************************************************************** */
/*                 *#########                                                  */
/*                ##........../##           KWAK!                              */
/*              *#,.......,##....#######
	/                                    */
/*              ##........./....##////##                                       */
/*    ##          ##...........,##((##                                         */
/*   #.###/        ##,..........*                                              */
/*  #(.....(######(###*........,##                                             */
/* ##.............................##      File    : Fixed.cpp                  */
/* ##.    __       __  o       __  ##                                          */
/* ##.   |_  |\ | | __ | |\ | |_    *#.   Created : abquaoub                   */
/*  ##   |__ | \| |__| | | \| |__   ,#,
				2024/09/22 14:42:07        */
/*   ##.............................##                                         */
/*
	/##........................*##      Updated : abquaoub                   */
/*       ###/................*###.                  2024/09/22 14:42:07        */
/*            ##############.                                                  */
/* *************************************************************************** */

#include "Fixed.hpp"





int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits(int const raw)
{
	value = raw;
}


Fixed::Fixed()
{
	value = 0;
	std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(const int nn)
{
	value = nn << fractional;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nn)
{
	value = roundf(nn * 256);
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(const Fixed &obj)
{
	this->value = obj.value;
	*this = obj;
	std::cout << "Copy constructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Fixed& p) {
    os << p.toFloat();
    return os;
}


Fixed &Fixed::operator=(const Fixed &C)
{
	if(this != &C)
		this->value = C.value;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}


float Fixed::toFloat( void ) const
{
	float  val = value / 256.f;
	return val;
}


int Fixed::toInt( void ) const
{
	return value >> fractional;
}
