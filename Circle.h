#include <iostream>
#include "Figure.h"

using namespace std;

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle:public Figure{
private:
    double radius;
public:
    Circle(double _radius);
    double getArea();
    double getPerimeter();
    void printMembers();
};

#endif