#include <iostream>
#include "GeometryEngine.h"
#include <vector>
#include <string>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Line.h"
#include "Point.h"
#include "Circle.h"


GeometryEngine::GeometryEngine(){

};
GeometryEngine::~GeometryEngine(){

};

void GeometryEngine::createline(Point p1,Point p2){
    Line ln(p1,p2);
    std::vector<Point> t = ln.getCoordinates();
    FileWrite f1;
    f1.write(t);
}
void GeometryEngine::createrectangle(Point p1, Point p2){
    if ((p1.x == p2.x) || (p1.y ==p2.y)){
        std::cout<<"This rectangle is not possible";
    }
    else 
    {
    Rectangle re(p1,p2);
    std::vector<Point> t = re.getCoordinates();
    FileWrite f1;
    f1.write(t);
    }
}

void GeometryEngine::createtriangle(Point p1, Point p2, Point p3){
    if ((p1.x == p2.x) || (p1.y ==p2.y)){
        std::cout<<"This rectangle is not possible";
    }
    else 
    {
    Triangle tr(p1,p2,p3);
    std::vector<Point> t = tr.getCoordinates();
    FileWrite f1;
    f1.write(t);
    }
}

void GeometryEngine::createcircle(Point p1, double radius){
    Circle cr(p1,radius);
    std::vector<Point> t = cr.getCoordinates();
    FileWrite f1;
    f1.write(t);
}

