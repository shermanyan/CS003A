//
// Created by Sherman Yan on 11/17/22.
//

#include "Square.h"

void Square::draw(sf::RenderTarget &target, sf::RenderStates states) const {

    target.draw(square);
}

void Square::eventHandler(const sf::RenderWindow &window, const sf::Event &event) {
    sf::Vector2f mPos = (sf::Vector2f)sf::Mouse::getPosition(window);

    if(square.getGlobalBounds().contains(mPos) &&
            sf::Mouse::isButtonPressed(sf::Mouse::Left))
        redState = !redState;
}

void Square::update() {
    if(redState)
        square.setFillColor(sf::Color::Red);
    else
        square.setFillColor(sf::Color::Green);
}

Square::Square() {
    square.setSize({100, 100});
}
