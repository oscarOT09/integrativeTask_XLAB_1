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

#ifndef TRIANGLE_H
#define TRIANGLE_H

/**
 * @class Triangle
 * @brief Represents a triangle, derived from the abstract class Figure.
 *
 * The Triangle class provides methods to calculate the area,
 * perimeter, and print its attributes (height, sides length and color).
 */
class Triangle:public Figure{
private:
    /**
     * @brief Height of the triangle.
     */
    double height;
    /**
     * @brief Left side of the triangle.
     */
    double side1Length;
    /**
     * @brief Right side of the triangle.
     */
    double side2Length;
    /**
     * @brief Base of the triangle.
     */
    double baseLength;
public:
    /**
     * @brief Constructor for the Triangle class.
     * @param _height Height value for the triangle.
     * @param _side1Length Left side value for the triangle.
     * @param _side2Length Right side value for the triangle.
     * @param _baseLength Base value for the triangle.
     */
    Triangle(double _height, double _side1Length, double _side2Length, double _baseLength);
    
    /**
     * @brief Calculates and returns the area of the triangle.
     * @return Area of the triangle.
     */
    double getArea();

    /**
     * @brief Calculates and returns the perimeter of the triangle.
     * @return Perimeter of the triangle.
     */
    double getPerimeter();
    /**
     * @brief Prints the attributes of the triangle (height, sides length and color).
     */
    void printMembers();
};

#endif