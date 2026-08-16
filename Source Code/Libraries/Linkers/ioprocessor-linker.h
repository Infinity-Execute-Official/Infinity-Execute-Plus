#ifndef IOPROCESSOR_H
#define IOPROCESSOR_H

#include <iostream>
#include <string>

#ifdef _WIN32
    #ifdef BUILDING_IOPROCESSOR
        #define IO_API __declspec(dllexport)
    #else
        #define IO_API __declspec(dllimport)
    #endif
#else
    #define IO_API
#endif

IO_API void print(std::string& command, bool& is_command);

#endif