/********************************************************
 * Author: Oscar Ortiz Torres
 * Created on: 09/07/2025
 * Last modified: 11/07/2025
 ********************************************************/

#include "Figure.h"

void Figure::setColor(const string& _color){
    color = _color;
}

string& Figure::getColor(){
    return color;
}