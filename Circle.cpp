#include <iostream>
#include "Circle.h"
#include "Logger.h"
#include <string>

using namespace std;

Circle::Circle(double _radius){
    radius = _radius;
}

double Circle::getArea(){
    return 3.1416*(radius*radius);
}
double Circle::getPerimeter(){
    return 2*3.1416*radius;
}
void Circle::printMembers(){
    cout << "Circle members" << endl;
    Logger::logMember(to_string(radius));
    cout << " (radius)" << endl;
    Logger::logMember(color);
    cout << " (color)" << endl;
}