#include <iostream>
#include "Figure.h"

using namespace std;

#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle:public Figure{
private:
    double height;
    double side1Length;
    double side2Length;
    double baseLength;
public:
    Triangle(double _height, double _side1Length, double _side2Length, double _baseLength);
    double getArea();
    double getPerimeter();
    void printMembers();
};

#endif