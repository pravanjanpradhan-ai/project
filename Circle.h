#pragma once
#include "Shape.h"
#include "Point.h"

class Circle : public Shape { // Inheritance
private:
    double radius;
    Point p1;

public:
    Circle(Point p1,double r);

    double area() const override;       // Polymorphism
    double perimeter() const override;
    std::vector<Point> getCoordinates() const override;  // Polymorphism
};
