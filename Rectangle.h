#pragma once
#include "Shape.h"
#include "Point.h"

class Rectangle : public Shape {
private:
    Point p1;
    Point p2;
    Point p3;
    Point p4;
    double width;
    double height;

public:
    Rectangle(Point p1,Point p3);

    double area() const override;
    double perimeter() const override;
    std::vector<Point> getCoordinates() const override;
};