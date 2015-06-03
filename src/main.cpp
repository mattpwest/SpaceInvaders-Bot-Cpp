#include <iostream>
#include <string>

#include "spacebot.h"

int main(int argc, char* argv[])
{
    if (argc < 2) {
	std::cout << "usage: " << argv[0] << " <output folder>" << std::endl;
	return 1;
    }

    std::string outputFolder = argv[1];
    Spacebot bot(std::move(outputFolder));
    bot.writeNextMove();
    
    return 0;
}
