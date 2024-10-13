#include "Game.h"

#include <SFML/Graphics.hpp>

Game::Game() {
    this->renderWindow.create(sf::VideoMode(1920, 1080), "Test Game", sf::Style::Fullscreen);
}

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
    sf::Time dt = this->clock.restart();
}

void Game::drawScene() {
    /* clear everything from the last frame */
    this->renderWindow.clear();

    // Draw game scene

    // Show
    this->renderWindow.display();
}