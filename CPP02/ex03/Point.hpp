






#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
Fixed  x;
Fixed  y;
public:
    Fixed getX() const;
    Fixed getY() const;
    Point();
    Point(const float x , const float y);
    Point(const Point &obj);
    Point &operator=(const Point &obj);
    ~Point();
};



bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif