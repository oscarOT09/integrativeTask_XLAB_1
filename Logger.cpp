/********************************************************
 * Author: Oscar Ortiz Torres
 * Created on: 09/07/2025
 * Last modified: 11/07/2025
 ********************************************************/

#include "Logger.h"

chrono::steady_clock::time_point Logger::start_time;

void Logger::log(const string& message){
    if (message.empty()) {
        cout << endl;
        return;
    } 
    cout << "[" << getTimestamp() << "] " << message << endl;
}
void Logger::logMember(const string& member){
    cout << "-> [" << getTimestamp() << "] " << member;
}
void Logger::logArea(const string& area){
    cout << "<A> [" << getTimestamp() << "] " << area << endl;
}
void Logger::logPerimeter(const string& perimeter){
    cout << "<P> [" << getTimestamp() << "] " << perimeter << endl;
}
int Logger::getTimestamp(){
    auto now = std::chrono::steady_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(now - start_time).count();
    return static_cast<int>(elapsed);
}
void Logger::initTime(){
    start_time = chrono::steady_clock::now();
}