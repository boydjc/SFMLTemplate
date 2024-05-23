#include "Game.h"

#include <SFML/Graphics.hpp>

Game::Game() {}
Game::~Game() {}

void Game::run() {
    while(this->renderWindow.isOpen()) {
        handleInput();
        updateScene();
        drawScene();
    }
}

void Game::handleInput() {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
        this->renderWindow.close();
    }
}

void Game::updateScene() {
    /* TODO */
}

void Game::drawScene() {
    /* clear everything from the last frame */
    this->renderWindow.clear();

    // Draw game scene

    // Show
    this->renderWindow.display();
}