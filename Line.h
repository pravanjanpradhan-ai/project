#pragma once
#include "Shape.h"

class Line : public Shape {
private:
    double a; // sides

public:
    Line(double Length);

    double area() const override;
    double perimeter() const override;
};