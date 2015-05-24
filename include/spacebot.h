#pragma once

#include <iostream>
#include <fstream>

class Spacebot {
public:
    Spacebot(const std::string& outputPath);
    void writeNextMove();
private:
    std::ifstream mapStream;
    std::ofstream resultStream;
};
