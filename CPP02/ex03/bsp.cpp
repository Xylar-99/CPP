

#include "Point.hpp"



// λ1​=(y2​−y3​)(x1​−x3​)+(x3​−x2​)(y1​−y3​)(y2​−y3​)(x−x3​)+(x3​−x2​)(y−y3​)​



// λ2=(y3−y1)(x−x3)+(x1−x3)(y−y3)(y2−y3)(x1−x3)+(x3−x2)(y1−y3)


// λ3​=1−λ1​−λ2


// (y2​−y3​)(x1​−x3​)+(x3​−x2​)(y1​−y3​)



float area(Point const a, Point const b, Point const c)
{
    float areaABC =  (a.getX().toFloat() * b.getY().toFloat() - a.getX().toFloat() * c.getY().toFloat()) + (b.getX().toFloat() * c.getY().toFloat() - b.getX().toFloat() * a.getY().toFloat()) + (c.getX().toFloat() * a.getY().toFloat() - c.getX().toFloat() * b.getY().toFloat()) ;

    areaABC = (areaABC < 0) ? areaABC * (-1) : areaABC;
    
    areaABC *= 0.5f;
    return areaABC;
}


bool bsp( Point const a, Point const b, Point const c, Point const point)
{


    float areaABC = area(a , b , c);
    float areaPAB = area(point , a , b);
    float areaPBC = area(point , b , c);
    float areaPCA = area(point , c , a);

    
    return(areaABC == areaPBC + areaPAB + areaPCA);
}