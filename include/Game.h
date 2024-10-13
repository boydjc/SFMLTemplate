#pragma once
#include <SFML/Graphics.hpp>

class Game {

    public:
        Game();
        ~Game();
        void run();
        void handleInput();
        void updateScene();
        void drawScene();
    private:
        sf::Clock clock;
        sf::RenderWindow renderWindow;

};