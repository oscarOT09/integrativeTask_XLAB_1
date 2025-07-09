#include <iostream>
using namespace std;

#ifndef FIGURE_H
#define FIGURE_H

class Figure{
public:
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
    virtual void printMembers() = 0;
    void setColor(const string& _color);
    string& getColor();

protected:
    string color;
};

#endif