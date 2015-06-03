#include "game_state.h"
#include <iostream>

const int OPENING_LINES = 6;
const int GAME_AREA_LINES = 25;

GameState::GameState(std::istream& file)
{
    for (int i=0; i<OPENING_LINES; ++i)
    {
        file.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    int x = -1;
    int y = 0;
    char nextChar = ' ';
    while (char nextChar = file.get())
    {
	++x;
	switch (nextChar)
	{
	case Alien.MAP_CHAR:
	    aliens.push_back(Alien(x,y));
	    break;
	case '\n':
	    ++y;
	    x = -1;
	    break;
	}
    }
}
