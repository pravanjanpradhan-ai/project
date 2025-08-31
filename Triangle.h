#pragma once
#include "Shape.h"
#include "Point.h"
#include "Line.h"



class Triangle : public Shape {
private:
    Point p1;
    Point p2;
    Point p3;
    Line l1;
    Line l2;
    Line l3;
    double sideA;
    double sideB;
    double sideC;

public:
    Triangle(Point p1,Point p2,Point p3);

    double area() const override;
    double perimeter() const override;
    std::vector<Point> getCoordinates() const override;
};