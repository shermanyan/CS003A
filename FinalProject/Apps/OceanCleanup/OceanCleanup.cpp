//
// Created by Sherman Yan on 12/14/22.
//

#include "OceanCleanup.h"

void OceanCleanup::eventHandler(sf::RenderWindow &window, const sf::Event &event) {

}

void OceanCleanup::update(const sf::RenderWindow &window) {
    trashGenerator.generate({100,200,(float)window.getSize().x -200,(float)window.getSize().y -300},clock);

    boat.move(window);
    boat.eat(trashGenerator.getTrash());

    scoreText.setString("Score: " + std::to_string(boat.getEatNumber()));
}

void OceanCleanup::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(gameTitle);
    target.draw(scoreText);
    target.draw(trashGenerator);
    target.draw(boat);
}

OceanCleanup::OceanCleanup() {
    clock.restart();

    trashGenerator.setGenerationInterval(1);
    trashGenerator.setMaxTrash(20);

    boat.setPosition(500,500);

    gameTitle.setFont(Fonts::getFont(RUBIK_GEMSTONES));
    gameTitle.setCharacterSize(80);
    gameTitle.setPosition(35,35);
    gameTitle.setFillColor({255, 217, 102});
    gameTitle.setString("OCEAN CLEANUP");

    scoreText.setFont(Fonts::getFont(RUBIK_GEMSTONES));
    scoreText.setCharacterSize(25);
    scoreText.setPosition(50, 0);
    Position::bottom(scoreText,gameTitle,50);
    scoreText.setFillColor({253,196,182});

}
