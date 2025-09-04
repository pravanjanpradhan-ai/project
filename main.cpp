#include <iostream>
#include <vector>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include "Line.h"
#include "Point.h"
#include "FileWrite.h"
#include "Polygon.h"
#include <fstream>
#include <string>
#include "GeometryEngine.h"
using namespace std;
int main() {
    int shape;
    Point p1;
    Point p2;
    Point p3;
    double radius;
    int sides;
    
    while(shape!=0){
    GeometryEngine g1;
    cout<<"Choose the shape which you want to plot"<<endl;
    cout<<"1. Triangle "<<endl;
    cout<<"2. Rectangle"<<endl;
    cout<<"3. Circle "<<endl;
    cout<<"4. Line "<<endl;
    cout<<"5. Polygon "<<endl;
    cout<<"0. End the operation"<<endl;
    cin>>shape;
    switch (shape)
    {
    case 1:
        cout<<"Give the Coordinate of triangle as (x,y)"<<endl;
        cout<<"Point 1 : ";
        cin>>p1.x>>p1.y;
        cout<<"Point 2 : ";
        cin>>p2.x>>p2.y;
        cout<<"Point 3 : ";
        cin>>p3.x>>p3.y;
        g1.createtriangle(p1,p2,p3);
        break;
    case 2:
        cout<<"Give the Coordinate of rectangle as (x,y)"<<endl;
        cout<<"Point 1 : ";
        cin>>p1.x>>p1.y;
        cout<<"Point 2 : ";
        cin>>p2.x>>p2.y;
        g1.createrectangle(p1,p2);
        break;
    case 3:
        cout<<"Give the mid point of Circle as (x,y) and radius "<<endl;
        cout<<"center point : ";
        cin>>p1.x>>p1.y;
        cout<<"Radius : ";
        cin>>radius;
        g1.createcircle(p1,radius);
        break;
    case 4:
        cout<<"Give the Coordinate of line as (x,y)"<<endl;
        cout<<"Point 1 : ";
        cin>>p1.x>>p1.y;
        cout<<"Point 2 : ";
        cin>>p2.x>>p2.y;
        g1.createline(p1,p2);
        break;
    case 5:
        cout<<"Give the mid point of polygon as (x,y) and no of sides "<<endl;
        cout<<"center point : ";
        cin>>p1.x>>p1.y;
        cout<<"No of sides: ";
        cin>>sides;
        g1.createpolygon(p1,sides);
        break;
    case 0:

    default:
        cout<<"wrong input!"<<endl;
        break;
    }
    
    }

    
    std::cin.get();

    return 0;
}