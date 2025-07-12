/********************************************************
 * Author: Oscar Ortiz Torres
 * Created on: 09/07/2025
 * Last modified: 11/07/2025
 ********************************************************/

#include "Circle.h"

/**
 * Constructs a Circle with a given radius.
 */
Circle::Circle(double _radius){
    radius = _radius;
}

/**
 * Computes the area using the formula πr².
 */
double Circle::getArea(){
    return 3.1416*(radius*radius);
}

/**
 * Computes the perimeter using the formula 2πr.
 */
double Circle::getPerimeter(){
    return 2*3.1416*radius;
}

/**
 * Displays the radius and color using Logger.
 */
void Circle::printMembers(){
    Logger::logMember(to_string(radius));
    cout << " (radius)" << endl;
    Logger::logMember(color);
    cout << " (color)" << endl;
}