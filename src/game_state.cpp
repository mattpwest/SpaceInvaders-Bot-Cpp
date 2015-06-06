#include "game_state.h"
#include <iostream>
#include <fstream>
#include <limits>

const int OPENING_LINES = 6;
const int GAME_AREA_LINES = 25;

GameState::GameState(std::string mapFilename)
{
    std::ifstream mapFile(mapFilename);
    for (int i=0; i<OPENING_LINES; ++i)
    {
        mapFile.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    
    int y = 0;

    for (int x=-1; y <= GAME_AREA_LINES; ++x)
    {
        char nextChar = mapFile.get();
	if (nextChar == EOF)
	{
	    break;
	}

	switch (nextChar)
	{
	case Alien::MAP_CHAR:
	    aliens.push_back(Alien(x,y));
	    break;
	case EnemyBullet::ALIEN_MAP_CHAR:
	case EnemyBullet::ENEMY_MISSILE_MAP_CHAR:
	    bullets.push_back(EnemyBullet(x,y));
	    break;
	case PlayerMissile::MAP_CHAR:
	    missiles.push_back(PlayerMissile(x,y));
	    break;
	case Shield::MAP_CHAR:
	    shields.push_back(Shield(x,y));
	    break;
	case Spaceship::ENEMY_MAP_CHAR:
	case Spaceship::PLAYER_MAP_CHAR:
	    spaceships.push_back(Spaceship(x,y));
	    break;
	case '\n':
	    ++y;
	    x = -1;
	    break;
	}
    }
}

void GameState::logState()
{
    for (auto alien : aliens)
    {
	std::cout << "Alien (" << alien.x() << ", " << alien.y() << ")" << std::endl;
    }
}
