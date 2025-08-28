#include "Line.h"
#include <cmath>

Line::Line(double Length): Shape("Line"), a(Length) {}

double Line::perimeter() const {
    return a ;
}

double Line::area() const {
    
    return 0;
}