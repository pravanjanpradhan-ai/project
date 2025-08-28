#pragma once
#include <string>

// Abstract Base Class (Abstraction)
class Shape {
protected:
    std::string name; // Encapsulation (private/protected data)

public:
    Shape(const std::string& n);
    virtual ~Shape();

    // Pure virtual functions (Abstraction + Polymorphism)
    virtual double area() const = 0;
    virtual double perimeter() const = 0;

    // Common method
    std::string getName() const;
};