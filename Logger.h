/********************************************************
 * Author: Oscar Ortiz Torres
 * Created on: 09/07/2025
 * Last modified: 11/07/2025
 ********************************************************/

#include <iostream>
#include <chrono>
using namespace std;

#ifndef LOGGER_H
#define LOGGER_H

/**
 * @class Logger
 * @brief Gives methods to interact with the console.
 *
 * The Logger static class provides methods to print 
 * different types of messages with an unique format each.
 */
class Logger{
public:
    /**
     * @brief Prints a standard message.
     */
    static void log(const string& message);
    /**
     * @brief Prints a message with a class member.
     */
    static void logMember(const string& member);
    /**
     * @brief Prints a message with a figure area.
     */
    static void logArea(const string& area);
    /**
     * @brief Prints a message with a figure perimeter.
     */
    static void logPerimeter(const string& perimeter);
    /**
     * @brief Initializes the start_time variable 
     */
    static void initTime();
private:
    /**
     * @brief Returns time elapsed since program started.
     * @return Miliseconds elapsed.
     */
    static int getTimestamp();
    /**
     * @brief Time when the program starts.
     */
    static chrono::steady_clock::time_point start_time;
};

#endif