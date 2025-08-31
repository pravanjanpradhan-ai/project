#include <iostream>
#include <vector>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Line.h"
#include "Point.h"

int main() {
    Point p1(0.0,0.0);
    Point p2(5.0,5.0);
    Point p3(5.0,0.0);
    std::vector<Shape*> shapes;
    shapes.push_back(new Line(p1,p2));
    shapes.push_back(new Circle(p1,5.0));
    shapes.push_back(new Rectangle(p1,p2));
    shapes.push_back(new Triangle(p1,p2,p3));

    for (Shape* shape : shapes) {
        std::cout << shape->getName()
                  << " | Area: " << shape->area()
                  << " | Perimeter: " << shape->perimeter()
                  << std::endl;
    }

    //Clean up memory
    for (Shape* shape : shapes) {
        delete shape;
    }


    std::cin.get();

    return 0;
}