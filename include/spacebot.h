#pragma once

#include <iostream>
#include <fstream>
#include "move.h"

class Spacebot {
public:
    Spacebot(const std::string& outputPath);
    void writeNextMove();
private:
    std::ifstream mapStream;
    std::ofstream resultStream;
    void writeMove(const Move& move);
    Move chooseMove();
};
