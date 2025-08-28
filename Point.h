#pragma once
#include "Shape.h"

class Point : public Shape {
private:
    double x; // sides
    double y;

public:
    Point(double a,double b);

    double area() const override;
    double perimeter() const override;
};