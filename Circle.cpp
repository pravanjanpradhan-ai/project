#include "Circle.h"
#include <cmath>

Circle::Circle(Point p1,double r) : Shape("Circle"),p1(p1), radius(r) {}

const int numPoints = 3;
const double angleStep = 2 * M_PI / numPoints;

double Circle::area() const {
    return 3.14159 * radius * radius;
}

double Circle::perimeter() const {
    return 2 * 3.14159 * radius;
}
std::vector<Point> Circle::getCoordinates() const {
    std::vector<Point> coords;
    for (int i = 0; i < numPoints; ++i) {
        double angle = i * 2 * M_PI / numPoints;
        double x = p1.x + radius * cos(angle);
        double y = p1.y + radius * sin(angle);
        coords.push_back(Point(x, y));
    }
    return coords;
}