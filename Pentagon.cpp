/********************************************************
 * Author: Oscar Ortiz Torres
 * Created on: 09/07/2025
 * Last modified: 11/07/2025
 ********************************************************/

#include "Pentagon.h"

/**
 * Constructs a Pentagon with the given sides length and apothem.
 */
Pentagon::Pentagon(double _sidesLength, double _apothem){
    sidesLength = _sidesLength;
    apothem = _apothem;
}

/**
 * Computes the area using the formula (P*a)/2.
 */
double Pentagon::getArea(){
    return (getPerimeter()*apothem)/2;
}

/**
 * Computes the perimeter using the formula 5*L.
 */
double Pentagon::getPerimeter(){
    return 5*sidesLength;
}

/**
 * Displays the radius and color using Logger.
 */
void Pentagon::printMembers(){
    Logger::logMember(to_string(sidesLength));
    cout << " (sidesLength)" << endl;
    Logger::logMember(to_string(apothem));
    cout << " (apothem)" << endl;
    Logger::logMember(color);
    cout << " (color)" << endl;
}