#pragma once

#include "alien.h"
#include "enemy_bullet.h"
#include "player_missile.h"
#include "shield.h"
#include "spaceship.h"
#include <vector>
#include <string>

class GameState
{
public:
    GameState(std::string mapFilename);
    void logState();
private:
    std::vector<Alien> aliens;
    std::vector<EnemyBullet> bullets;
    std::vector<PlayerMissile> missiles;
    std::vector<Shield> shields;
    std::vector<Spaceship> spaceships;
};
