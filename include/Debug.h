#pragma once

#include "vex.h"
#include <string>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <fstream>

class Debug
{
    private:

    std::string fileName = "debug.log";
    std::ofstream ofs;
    brain * Brain;
    float runTime = 0;

    public:

    Debug(brain * Brain);
    Debug(brain * Brain, std::string fileName);

    void log(std::string info);
    void error(std::string info);
    void warning(std::string info);
};