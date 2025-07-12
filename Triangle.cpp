/********************************************************
 * Author: Oscar Ortiz Torres
 * Created on: 09/07/2025
 * Last modified: 11/07/2025
 ********************************************************/

 #include "Triangle.h"

/**
 * Constructs a Triangle with the given height, sides length and color.
 */
Triangle::Triangle(double _height, double _side1Length, double _side2Length, double _baseLength){
    height = _height;
    side1Length = _side1Length;
    side2Length = _side2Length;
    baseLength = _baseLength;
}

/**
 * Computes the area using the formula (b*h)/2.
 */
double Triangle::getArea(){
    return (baseLength*height)/2;
}

/**
 * Computes the perimeter using the formula (l1+l2+l3).
 */
double Triangle::getPerimeter(){
    return side1Length + side2Length + baseLength;
}

/**
 * Displays the radius and color using Logger.
 */
void Triangle::printMembers(){
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