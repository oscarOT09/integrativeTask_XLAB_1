#include <iostream>
#include <memory>
#include <string>
#include <algorithm>
#include "Circle.h"
#include "Triangle.h"
#include "Pentagon.h"
#include "Logger.h"
using namespace std;

double readAndCheckDoubleInput(const string& message) {
    double value;
    Logger::log(message);
    cin >> value;
    while (cin.fail() || value <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        Logger::log("Invalid input. Introduce a positive integer:");
        cin >> value;
    }
    return value;
}

string readAndCheckStringInput(const string& message){
    string color;
    Logger::log(message);
    cin >> color;
    while (color.empty() || !all_of(color.begin(), color.end(), ::isalpha)) {
       Logger::log("Invalid color. Introduce a color without numbers and special characters:");
       cin >> color;
    }
    return color;
}

int main(){
    Logger::initTime();

    double circle_radius;
    double triangle_heigth,
           triangle_s1Len,
           triangle_s2Len,
           triangle_baseLen;
    double pentagon_sidesLen,
           pentagon_apothem;
    string circle_color,
           triangle_color,
           pentagon_color;

    ///// PARAMETERS REQUEST /////
    Logger::log("Introduce Circle object parameters");
    circle_radius = readAndCheckDoubleInput("Radius:"); 
    
    Logger::log("Introduce Triangle object parameters");
    triangle_heigth = readAndCheckDoubleInput("Height:");
    triangle_s1Len = readAndCheckDoubleInput("Side 1 length:");
    triangle_s2Len = readAndCheckDoubleInput("Side 2 length:");
    triangle_baseLen = readAndCheckDoubleInput("Base (side 3) length:");

    Logger::log("Introduce Pentagon object parameters");
    pentagon_sidesLen = readAndCheckDoubleInput("Sides length:");
    pentagon_apothem = readAndCheckDoubleInput("Apothem:");
    
    Logger::log("");

    ///// OBJECTS CONSTRUCTION /////
    unique_ptr<Circle> circle1 = make_unique<Circle>(circle_radius);
    unique_ptr<Triangle> triangle1 = make_unique<Triangle>(triangle_heigth, triangle_s1Len, triangle_s2Len, triangle_baseLen);
    unique_ptr<Pentagon> pentagon1 = make_unique<Pentagon>(pentagon_sidesLen, pentagon_apothem);

    ///// COLORS REQUEST /////
    circle_color = readAndCheckStringInput("Introduce Circle object color:");
    triangle_color = readAndCheckStringInput("Introduce Triangle object color:");
    pentagon_color = readAndCheckStringInput("Introduce Pentagon object color:");

    Logger::log("");

    ////// COLORS ASSIGN /////
    circle1->setColor(circle_color);
    triangle1->setColor(triangle_color);
    pentagon1->setColor(pentagon_color);

    ///// PRINT RESULTS ///// 
    Logger::log("RESULTS");
    Logger::log("Circle object");
    Logger::logArea(to_string(circle1->getArea()));
    Logger::logPerimeter(to_string(circle1->getPerimeter()));
    circle1->printMembers();
    Logger::log("");

    Logger::log("Triangle object");
    Logger::logArea(to_string(triangle1->getArea()));
    Logger::logPerimeter(to_string(triangle1->getPerimeter()));
    triangle1->printMembers();
    Logger::log("");
    
    Logger::log("Pentagon object");
    Logger::logArea(to_string(pentagon1->getArea()));
    Logger::logPerimeter(to_string(pentagon1->getPerimeter()));
    pentagon1->printMembers();

    return 0;
}