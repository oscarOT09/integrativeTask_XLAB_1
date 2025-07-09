#include <iostream>
#include "Triangle.h"
#include "Logger.h"
#include <string>

using namespace std;

Triangle::Triangle(double _height, double _side1Length, double _side2Length, double _baseLength){
    height = _height;
    side1Length = _side1Length;
    side2Length = _side2Length;
    baseLength = _baseLength;
}

double Triangle::getArea(){
    return (baseLength*height)/2;
}
double Triangle::getPerimeter(){
    return side1Length + side2Length + baseLength;
}
void Triangle::printMembers(){
    cout << "Triangle members" << endl;
    Logger::logMember(to_string(height));
    cout << " (height)" << endl;
    Logger::logMember(to_string(side1Length));
    cout << " (side1Length)" << endl;
    Logger::logMember(to_string(side2Length));
    cout << " (side2Length)" << endl;
    Logger::logMember(to_string(baseLength));
    cout << " (baseLength)" << endl;
    Logger::logMember(color);
    cout << " (color)" << endl;
}