#include <iostream>
#include <vector>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Line.h"
#include "Point.h"

int main() {
    std::vector<Shape*> shapes;
    shapes.push_back(new Point(5.0,0.0));
    shapes.push_back(new Line(5.0));
    shapes.push_back(new Circle(5.0));
    shapes.push_back(new Rectangle(4.0, 6.0));
    shapes.push_back(new Triangle(3.0, 4.0, 5.0));

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