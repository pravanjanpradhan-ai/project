#pragma once
#include <fstream>
#include <vector>
#include <string>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Line.h"
#include "Point.h"

class FileWrite
{
public:
    FileWrite();
    ~FileWrite();

    void write(std::vector<Point>);
};
