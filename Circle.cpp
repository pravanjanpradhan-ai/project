#include "Circle.h"
#include <cmath>

Circle::Circle(double r) : Shape("Circle"), radius(r) {}

double Circle::area() const {
    return 3.14159 * radius * radius;
}

double Circle::perimeter() const {
    return 2 * 3.14159 * radius;
}