#include "catch.hpp"
#include <sstream>

#include "game_state.h"

SCENARIO("game state is read from istream")
{
    GIVEN("a valid map file")
    {
        std::stringstream file;
        file << "###################" << std::endl;
        file << "# Node Sample Bot #" << std::endl;
        file << "# Round:   1      #" << std::endl;
        file << "# Kills: 0        #" << std::endl;
        file << "# Lives: 2        #" << std::endl;
        file << "# Missiles: 0/1   #" << std::endl;
        file << "###################" << std::endl;
        file << "#                 #" << std::endl;
        file << "#       VVV       #" << std::endl;
        file << "# ---         --- #" << std::endl;
        file << "# ---         --- #" << std::endl;
        file << "# ---         --- #" << std::endl;
        file << "#                 #" << std::endl;
        file << "#                 #" << std::endl;
        file << "#                 #" << std::endl;
        file << "#                 #" << std::endl;
        file << "#                 #" << std::endl;
        file << "#         x  x  x #" << std::endl;
        file << "#                 #" << std::endl;
        file << "#         x  x  x #" << std::endl;
        file << "#                 #" << std::endl;
        file << "#                 #" << std::endl;
        file << "#                 #" << std::endl;
        file << "#                 #" << std::endl;
        file << "#                 #" << std::endl;
        file << "# ---         --- #" << std::endl;
        file << "# ---         --- #" << std::endl;
        file << "# ---         --- #" << std::endl;
        file << "#       AAA       #" << std::endl;
        file << "#                 #" << std::endl;
        file << "###################" << std::endl;
        file << "# Missiles: 0/1   #" << std::endl;
        file << "# Lives: 2        #" << std::endl;
        file << "# Kills: 0        #" << std::endl;
        file << "# Round:   1      #" << std::endl;
        file << "# Node Sample Bot #" << std::endl;
        file << "###################" << std::endl;
        
        WHEN ("the game state is initilized")
        {
            GameState state(std::move(file));
            THEN("the map is read correctly")
            {
                auto aliens = state.aliens();
                REQUIRE(aliens.size() == 6);
            }
        }
    }
}
