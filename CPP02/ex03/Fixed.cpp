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
	return (value);
}

void Fixed::setRawBits(int const raw)
{
	value = raw;
}


Fixed::Fixed()
{
	value = 0;
}


Fixed::Fixed(const int nn)
{
	value = nn << fractional;
}

Fixed::Fixed(const float nn)
{
	value = roundf(nn * 256);
}

Fixed::~Fixed()
{
}
Fixed::Fixed(const Fixed &obj)
{
	*this = obj;
}

std::ostream& operator<<(std::ostream& os, const Fixed& p) {
    os << p.toFloat();
    return os;
}

Fixed &Fixed::operator=(const Fixed &C)
{
	if(this != &C)
		this->value = C.value;
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



Fixed&  Fixed::operator++() 
{
	
	++value;
    return *this;
}


Fixed&  Fixed::operator--() 
{
	
	--value;
    return *this;
}


Fixed  Fixed::operator--(int) 
{
	
	Fixed tt = *this;
	this->value--;
    return tt;
}


Fixed  Fixed::operator++(int) 
{
	Fixed tt = *this;
	this->value++;
    return tt;
}
// comparaison

bool Fixed::operator==(const Fixed& other) const
{
	return(this->value == other.value);
}


bool Fixed::operator!=(const Fixed& other) const
{
	return(this->value != other.value);
}

bool Fixed::operator<(const Fixed& other) const
{
	return(this->value < other.value);
}

bool Fixed::operator>(const Fixed& other) const
{
	return(this->value > other.value);
}
bool Fixed::operator>=(const Fixed& other) const
{
	return(this->value >= other.value);
}
bool Fixed::operator<=(const Fixed& other) const
{
	return(this->value <= other.value);
}

//

Fixed operator+(const Fixed &other1 , const Fixed &other)
{
	float vv ;
	vv = other1.toFloat() + other.toFloat();
	Fixed res (vv);
	return (res);
}


Fixed operator-(const Fixed &other1 , const Fixed &other)
{
	float vv ;
	vv = other1.toFloat() - other.toFloat();
	Fixed res (vv);
	return (res);
}

Fixed operator*(const Fixed &other1 , const Fixed &other)
{
	float vv ;
	vv = other1.toFloat() * other.toFloat();
	Fixed res (vv);
	return (res);
}

Fixed operator/(const Fixed &other1 , const Fixed &other)
{
	float vv = other1.toFloat() / other.toFloat();

	Fixed res (vv);
	return (res);
}



Fixed &Fixed::max(Fixed& v1 , Fixed& v2)
{
	return (v1.getRawBits() > v2.getRawBits() ? v1 : v2);
}

const Fixed &Fixed::max(const Fixed& v1 , const Fixed& v2)
{

	const Fixed  &res = (v1.getRawBits() > v2.getRawBits()) ? v1 : v2;
	return (res);
}




Fixed &Fixed::min(Fixed& v1 , Fixed& v2)
{
	return (v1.getRawBits() < v2.getRawBits() ? v1 : v2);
}

const Fixed &Fixed::min(const Fixed& v1 , const Fixed& v2)
{

	const Fixed  &res = (v1.getRawBits() < v2.getRawBits()) ? v1 : v2;
	return (res);
}


