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
        sf::RenderWindow renderWindow = sf::RenderWindow(sf::VideoMode(1920, 1080), "Test Game", sf::Style::Fullscreen);


};