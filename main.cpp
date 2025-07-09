#include <iostream>
#include <memory>
#include <string>
#include "Circle.h"
#include "Triangle.h"
#include "Pentagon.h"
#include "Logger.h"
using namespace std;

int main(){
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
    // Circle parameters
    Logger::log("Introduce Circle object parameters");
    Logger::log("Radius:");
    cin >> circle_radius;
    
    // Triangle parameters
    Logger::log("Introduce Triangle object parameters");
    Logger::log("Height:");
    cin >> triangle_heigth;
    Logger::log("Side 1 length:");
    cin >> triangle_s1Len;
    Logger::log("Side 2 length:");
    cin >> triangle_s2Len;
    Logger::log("Base (side 3) length:");
    cin >> triangle_baseLen;    

    // Pentagon parameters
    Logger::log("Introduce Pentagon object parameters");
    Logger::log("Sides length:");
    cin >> pentagon_sidesLen;
    Logger::log("Apothem:");
    cin >> pentagon_apothem;

    ///// OBJECTS CONSTRUCTION /////
    unique_ptr<Circle> circle1 = make_unique<Circle>(circle_radius);
    unique_ptr<Triangle> triangle1 = make_unique<Triangle>(triangle_heigth, triangle_s1Len, triangle_s2Len, triangle_baseLen);
    unique_ptr<Pentagon> pentagon1 = make_unique<Pentagon>(pentagon_sidesLen, pentagon_apothem);
    
    Logger::log("");

    ///// COLORS REQUEST /////
    Logger::log("Introduce Circle object color");
    cin >> circle_color;
    Logger::log("Introduce Triangle object color");
    cin >> triangle_color;
    Logger::log("Introduce Pentagon object color");
    cin >> pentagon_color;

    Logger::log("");

    ////// COLORS ASSIGN /////
    circle1->setColor(circle_color);
    triangle1->setColor(triangle_color);
    pentagon1->setColor(pentagon_color);

    ///// PRINT AREAS ///// 
    Logger::log("AREAS");
    Logger::log("circle1:");
    Logger::logArea(to_string(circle1->getArea()));
    Logger::log("triangle1:");
    Logger::logArea(to_string(triangle1->getArea()));
    Logger::log("pentagon1:");
    Logger::logArea(to_string(pentagon1->getArea()));

    Logger::log("");

    ///// PRINT PERIMETERS /////
    Logger::log("PERIMETERS");
    Logger::log("circle1:");
    Logger::logPerimeter(to_string(circle1->getPerimeter()));
    Logger::log("triangle1:");
    Logger::logPerimeter(to_string(triangle1->getPerimeter()));
    Logger::log("pentagon1:");
    Logger::logPerimeter(to_string(pentagon1->getPerimeter()));

    Logger::log("");
    
    ///// PRINT MEMBERS /////
    Logger::log("OBJECTS MEMBERS");
    circle1->printMembers();   
    triangle1->printMembers();
    pentagon1->printMembers();

    return 0;
}