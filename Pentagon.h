#include <iostream>
#include "Figure.h"

using namespace std;

#ifndef PENTAGON_H
#define PENTAGON_H
class Pentagon:public Figure{
private:
    double sidesLength;
    double apothem;
public:
    Pentagon(double _sidesLength, double _apothem);
    double getArea();
    double getPerimeter();
    void printMembers();
};
#endif