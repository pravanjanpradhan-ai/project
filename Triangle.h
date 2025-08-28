#pragma once
#include "Shape.h"

class Triangle : public Shape {
private:
    double a, b, c; // sides

public:
    Triangle(double sideA, double sideB, double sideC);

    double area() const override;
    double perimeter() const override;
};