#include <SFML/Graphics.hpp>

#include "Classes/Game.h"

#include <ctime>

int main()
{
    std::srand(time(0));

    try {
        Game game;
        game.run();
    }
    catch (const std::exception& e) {
        std::cerr << "Error\n";
    }

    return 0;
}