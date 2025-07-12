/********************************************************
 * Author: Oscar Ortiz Torres
 * Created on: 09/07/2025
 * Last modified: 11/07/2025
 ********************************************************/

#include <iostream>
using namespace std;

#ifndef FIGURE_H
#define FIGURE_H

/**
 * @class Figure
 * @brief Represents a figure, father for other classes.
 *
 * The Figure abstract class provides virtual methods to calculate the area,
 * perimeter, and print attributes. It also includes methods to set and get the color of the figure.
 */
class Figure{
public:
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
    virtual void printMembers() = 0;
    /**
     * @brief Sets the color given to the figure.
     */
    void setColor(const string& _color);
    /**
     * @brief Gives the color of the figure.
     * @return Color of the figure.
     */
    string& getColor();

protected:
    /**
     * @brief Color of the figure.
     */
    string color;
};

#endif