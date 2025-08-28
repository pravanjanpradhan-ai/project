#include "Point.h"
#include <cmath>

Point::Point(double a,double b): Shape("Point"), x(a),y(b) {}

double Point::perimeter() const {
    return 0 ;
}

double Point::area() const {
    
    return 0;
}