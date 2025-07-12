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

#ifndef PENTAGON_H
#define PENTAGON_H

/**
 * @class Pentagon
 * @brief Represents a pentagon, derived from the abstract class Figure.
 *
 * The Pentagon class provides methods to calculate the area,
 * perimeter, and print its attributes (sidesLength, apothem and color).
 */
class Pentagon:public Figure{
private:
    /**
     * @brief Sides length of the regular pentagon.
     */
    double sidesLength;
    /**
     * @brief Apothem of the pentagon.
     */
    double apothem;
public:
    /**
     * @brief Constructor for the Pentagon class.
     * @param _sidesLength Sides length value for the pentagon.
     * @param _apothem Apothem value for the pentagon.
     */
    Pentagon(double _sidesLength, double _apothem);

    /**
     * @brief Calculates and returns the area of the Pentagon.
     * @return Area of the Pentagon.
     */
    double getArea();

    /**
     * @brief Calculates and returns the perimeter of the Pentagon.
     * @return Perimeter of the Pentagon.
     */
    double getPerimeter();
    
    /**
     * @brief Prints the attributes of the Pentagon (sides length, apothem and color).
     */
    void printMembers();
};
#endif