#include "spacebot.h"
#include <random>
#include <fstream>
#include <string>

Spacebot::Spacebot(std::string outputPath)
    : outputPath(std::move(outputPath)),
      gameState(std::ifstream(outputPath+"/map.txt"))
{
}

void Spacebot::writeNextMove()
{
    Move move = chooseMove();
    writeMove(move);
}

Move Spacebot::chooseMove()
{
    int min = static_cast<int>(Move::NOTHING);
    int max = static_cast<int>(Move::BUILD_SHIELD);
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);
    return static_cast<Move>(dis(gen));
}

void Spacebot::writeMove(const Move& move)
{
    std::ofstream resultStream(outputPath+"/move.txt");
    switch (move)
    {
    case Move::NOTHING:
	resultStream << "Nothing";
	break;
    case Move::MOVE_LEFT:
	resultStream << "MoveLeft";
	break;
    case Move::MOVE_RIGHT:
	resultStream << "MoveRight";
	break;
    case Move::SHOOT:
	resultStream << "Shoot";
	break;
    case Move::BUILD_ALIEN_FACTORY:
	resultStream << "BuildAlienFactory";
	break;
    case Move::BUILD_MISSILE_CONTROLLER:
	resultStream << "BuildMissileController";
	break;
    case Move::BUILD_SHIELD:
	resultStream << "BuildShield";
	break;
    default:
	resultStream << "MoveLeft";
    }
	 
    resultStream << std::endl;
    resultStream.flush();
    return;
}

