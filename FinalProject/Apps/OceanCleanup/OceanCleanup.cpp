//
// Created by Sherman Yan on 12/14/22.
//

#include "OceanCleanup.h"

void OceanCleanup::eventHandler(sf::RenderWindow &window, const sf::Event &event) {

}

void OceanCleanup::update(const sf::RenderWindow &window) {
    trashGenerator.generate(window,clock);

    boat.move(window);
    boat.eat(trashGenerator.getTrash());
}

void OceanCleanup::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(trashGenerator);
    target.draw(boat);
}

OceanCleanup::OceanCleanup() {
    clock.restart();
    trashGenerator.setGenerationInterval(1);
    trashGenerator.setMaxTrash(10);
    boat.setPosition(100,100);
}
