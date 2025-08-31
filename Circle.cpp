#include "Circle.h"
#include <cmath>

Circle::Circle(Point p1,double r) : Shape("Circle"),p1(p1), radius(r) {}

double Circle::area() const {
    return 3.14159 * radius * radius;
}

double Circle::perimeter() const {
    return 2 * 3.14159 * radius;
}
std::vector<Point> Circle::getCoordinates() const { 
    std::vector<Point> coords;
    coords.push_back(p1);
    return coords;
       /* points.push_back(p2); 
       points.push_back(p3); */ 
}