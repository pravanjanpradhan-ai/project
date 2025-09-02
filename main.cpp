#include <iostream>
#include <vector>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Line.h"
#include "Point.h"
#include "FileWrite.h"
#include <fstream>
#include <string>
#include "GeometryEngine.h"

int main() {
    std::string shape;
    Point p1(0.0,0.0);
    Point p2(5.0,5.0);
    Point p3(0.0,5.0);
    /* std::cout<<"write the name of the shape(Line,Triangle,Rectangle,Circle) : ";
    std::cin>>shape; */
    GeometryEngine g1;
    //g1.createline(p1,p2);
    g1.createrectangle(p1,p2);

    /* Triangle coTri(p1,p2,p3);
    std::vector<Point> t = coTri.getCoordinates();
    FileWrite f1;
    f1.write(t); */
    std::cin.get();

    return 0;
}