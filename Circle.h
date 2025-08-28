#pragma once
#include "Shape.h"

class Circle : public Shape { // Inheritance
private:
    double radius;

public:
    Circle(double r);

    double area() const override;       // Polymorphism
    double perimeter() const override;  // Polymorphism
};