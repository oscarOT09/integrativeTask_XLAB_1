#include <iostream>
#include "Pentagon.h"
#include "Logger.h"
#include <string>

using namespace std;

Pentagon::Pentagon(double _sidesLength, double _apothem){
    sidesLength = _sidesLength;
    apothem = _apothem;
}

double Pentagon::getArea(){
    return (getPerimeter()*apothem)/2;
}
double Pentagon::getPerimeter(){
    return 5*sidesLength;
}
void Pentagon::printMembers(){
    cout << "Pentagon members" << endl;
    Logger::logMember(to_string(sidesLength));
    cout << " (sidesLength)" << endl;
    Logger::logMember(to_string(apothem));
    cout << " (apothem)" << endl;
    Logger::logMember(color);
    cout << " (color)" << endl;
}