#pragma once

class Spaceship {
public:
    Spaceship(int x, int y);
    const static char ENEMY_MAP_CHAR = 'V';
    const static char PLAYER_MAP_CHAR = 'A';
private:
    int x;
    int y;
};
