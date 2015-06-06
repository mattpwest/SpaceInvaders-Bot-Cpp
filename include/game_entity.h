#pragma once

class GameEntity
{
public:
    GameEntity(int x, int y);
    int x() const {return _x;}
    int y() const {return _y;}
private:
    int _x;
    int _y;
};

