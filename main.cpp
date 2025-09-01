#include <iostream>
#include <vector>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Line.h"
#include "Point.h"
#include <fstream>

int main() {
    Point p1(0.0,0.0);
    Point p2(5.0,4.0);
    Point p3(5.0,0.0);
    std::vector<Shape*> shapes;
    shapes.push_back(new Line(p1,p2));
    shapes.push_back(new Circle(p1,5.0));
    shapes.push_back(new Rectangle(p1,p2));
    shapes.push_back(new Triangle(p1,p2,p3));

    
    std::ofstream ofs ("test.txt", std::ofstream::out);

    for (Shape* shape : shapes) {
        std::cout << shape->getName()
                  << " | Area: " << shape->area()
                  << " | Perimeter: " << shape->perimeter()
                  << std::endl;
    }

// Triangle output
/*     Triangle coTri(p1,p2,p3);
    std::vector<Point> t = coTri.getCoordinates();
    int trSize=t.size();
    
    for (int i=0;i<trSize;i++){
        ofs<<t.front().x<<" "<<t.front().y<<std::endl;
        t.erase(t.begin());
    }
     */
// Line output
 /*    Line coLine(p1,p2);
    std::vector<Point> l = coLine.getCoordinates();
    int lnSize=l.size();

    for (int i=0;i<2;i++){
        ofs<<l.front().x<<" "<<l.front().y<<std::endl;
        l.erase(l.begin());
    }
     */
// rectange output
Rectangle coRectangle(p1,p2);
    std::vector<Point> r = coRectangle.getCoordinates();
    int recSize=r.size();

    for (int i=0;i<recSize;i++){
        ofs<<r.front().x<<" "<<r.front().y<<std::endl;
        r.erase(r.begin());
    }

    ofs.close();
    //Clean up memory
    for (Shape* shape : shapes) {
        delete shape;
    }

    
    
  std::cin.get();

    return 0;
}