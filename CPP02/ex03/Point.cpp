

#include "Point.hpp"


Point::Point()
{
     
    x.setRawBits(0);
    y.setRawBits(0);
}

Point::Point(const float xx , const float yy)
{
    x.setRawBits(roundf(xx * 256));
    y.setRawBits(roundf(yy * 256));
}

Point::~Point()
{
    // std::cout << "Destructor!!!!";
}

Point::Point(const Point &obj)
{
    this->x = obj.x;
    this->y = obj.y;
}

Point& Point::operator=(const Point &obj)
{
    if(this != &obj)
    {
        this->x = obj.x;
        this->y = obj.y;
    }
    return *this;
}

Fixed Point::getX() const
{
    return x;
}


Fixed Point::getY() const
{
    return y;
}