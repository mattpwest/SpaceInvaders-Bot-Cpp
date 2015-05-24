#include "spacebot.h"

Spacebot::Spacebot(const std::string& outputPath)
  : mapStream(outputPath+"map.txt", std::ifstream::in)
  , resultStream(outputPath+"move.txt", std::ofstream::out)
{
}

void Spacebot::writeNextMove()
{
  resultStream << "Shoot" << std::endl;
}
