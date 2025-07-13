/********************************************************
 * Author: Oscar Ortiz Torres
 * Created on: [dd/mm/yyyy]
 * Last modified: 12/07/2025
 * Description:
 *   Main program that demonstrates polymorphism in C++
 *   through the creation of Circle, Triangle, and Pentagon
 *   objects. It reads user input for dimensions and color,
 *   validates input, calculates area and perimeter, and
 *   displays results using a Logger.
 ********************************************************/

#include <iostream>
#include <memory>
#include <string>
#include <algorithm>
#include "Circle.h"
#include "Triangle.h"
#include "Pentagon.h"
#include "Logger.h"
using namespace std;

/**
 * @brief Prompts the user for a positive double value and validates input.
 * 
 * @param message Prompt message to display.
 * @return A validated positive double value.
 */
double readAndCheckDoubleInput(const string& message) {
    double value;
    Logger::log(message);
    cin >> value;
    while (cin.fail() || value <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        Logger::log("Invalid input. Introduce a positive number:");
        cin >> value;
    }
    return value;
}

/**
 * @brief Prompts the user for a valid string (letters only) and validates input.
 * 
 * @param message Prompt message to display.
 * @return A validated string containing only letters.
 */
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

/**
 * @brief Logs the name, area, perimeter, and attributes of a given figure.
 * 
 * @param name Name of the figure.
 * @param fig Smart pointer to a Figure-derived object.
 */
void printResults(const string& name, Figure& fig) {
    Logger::log(name + " object");
    Logger::logArea(to_string(fig.getArea()));
    Logger::logPerimeter(to_string(fig.getPerimeter()));
    fig.printMembers();
    Logger::log("");
}

/**
 * @brief Main function of the program.
 * 
 * Initializes the logger, prompts the user for geometric parameters and colors,
 * creates geometric objects (Circle, Triangle, Pentagon) using smart pointers,
 * assigns colors, and displays the computed area and perimeter of each shape.
 * 
 * @return int Returns 0 upon successful execution.
 */
int main(){
    Logger::initTime();

    // --- Variable Declarations ---
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

    // --- Input for Parameters ---
    Logger::log("Enter Circle object parameters");
    circle_radius = readAndCheckDoubleInput("Radius:"); 
    
    Logger::log("Enter Triangle object parameters");
    triangle_heigth = readAndCheckDoubleInput("Height:");
    triangle_s1Len = readAndCheckDoubleInput("Side 1 length:");
    triangle_s2Len = readAndCheckDoubleInput("Side 2 length:");
    triangle_baseLen = readAndCheckDoubleInput("Base (side 3) length:");

    Logger::log("Enter Pentagon object parameters");
    pentagon_sidesLen = readAndCheckDoubleInput("Sides length:");
    pentagon_apothem = readAndCheckDoubleInput("Apothem:");
    
    Logger::log("");

    // --- Object Construction ---
    unique_ptr<Circle> circle1 = make_unique<Circle>(circle_radius);
    unique_ptr<Triangle> triangle1 = make_unique<Triangle>(triangle_heigth, triangle_s1Len, triangle_s2Len, triangle_baseLen);
    unique_ptr<Pentagon> pentagon1 = make_unique<Pentagon>(pentagon_sidesLen, pentagon_apothem);

    // --- Input for Colors ---
    circle_color = readAndCheckStringInput("Introduce Circle object color:");
    triangle_color = readAndCheckStringInput("Introduce Triangle object color:");
    pentagon_color = readAndCheckStringInput("Introduce Pentagon object color:");

    Logger::log("");

    // --- Assign Colors ---
    circle1->setColor(circle_color);
    triangle1->setColor(triangle_color);
    pentagon1->setColor(pentagon_color);

    // --- Print Results ---
    Logger::log("RESULTS");
    printResults("Circle1", *circle1);
    printResults("Triangle1", *triangle1);
    printResults("Pentagon1", *pentagon1);

    return 0;
}