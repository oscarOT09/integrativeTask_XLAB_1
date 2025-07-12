/********************************************************
 * Author: Oscar Ortiz Torres
 * Created on: 09/07/2025
 * Last modified: 11/07/2025
 ********************************************************/

#include <iostream>
#include "Figure.h"
#include "Logger.h"
#include <string>

using namespace std;

#ifndef CIRCLE_H
#define CIRCLE_H

/**
 * @class Circle
 * @brief Represents a circle, derived from the abstract class Figure.
 *
 * The Circle class provides methods to calculate the area,
 * perimeter, and print its attributes (radius and color).
 */
class Circle:public Figure{
private:
    /**
     * @brief Radius of the circle.
     */
    double radius;
public:
    /**
     * @brief Constructor for the Circle class.
     * @param _radius Radius value for the circle.
     */
    Circle(double _radius);

    /**
     * @brief Calculates and returns the area of the circle.
     * @return Area of the circle.
     */
    double getArea();
    
    /**
     * @brief Calculates and returns the perimeter of the circle.
     * @return Perimeter of the circle.
     */
    double getPerimeter();
    
    /**
     * @brief Prints the attributes of the circle (radius and color).
     */
    void printMembers();
};

#endif