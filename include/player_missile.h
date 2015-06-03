#pragma once

class PlayerMissile
{
public:
    PlayerMissile(int x, int y);
    const static char MAP_CHAR = '!';
private:
    int x;
    int y;
};
