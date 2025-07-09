#include <iostream>
#include "Logger.h"

using namespace std;

void Logger::log(const string& message){
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
    return 100;
}