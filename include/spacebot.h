#pragma once

#include <string>
#include "move.h"
#include "game_state.h"

class Spacebot {
public:
    Spacebot(std::string outputPath);
    void writeNextMove();
private:
    std::string outputPath;
    GameState gameState;
    void writeMove(const Move& move);
    Move chooseMove();
};
