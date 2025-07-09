#include <iostream>
using namespace std;

#ifndef LOGGER_H
#define LOGGER_H

class Logger{
public:
    static void log(const string& message);
    static void logMember(const string& member);
    static void logArea(const string& area);
    static void logPerimeter(const string& perimeter);
private:
    static int getTimestamp();
protected:
    string color;
};

#endif