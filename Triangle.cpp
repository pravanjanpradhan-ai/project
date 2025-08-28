#include "Triangle.h"
#include <cmath>

Triangle::Triangle(double sideA, double sideB, double sideC)
    : Shape("Triangle"), a(sideA), b(sideB), c(sideC) {}

double Triangle::perimeter() const {
    return a + b + c;
}

double Triangle::area() const {
    // Heron's formula
    double s = perimeter() / 2.0;
    return std::sqrt(s * (s - a) * (s - b) * (s - c));
}