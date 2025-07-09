#include <iostream>
#include "Figure.h"

using namespace std;

void Figure::setColor(const string& _color){
    color = _color;
}

string& Figure::getColor(){
    return color;
}