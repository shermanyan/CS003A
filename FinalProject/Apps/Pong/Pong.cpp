//
// Created by Sherman Yan on 12/7/22.
//

#include "Pong.h"

void Pong::eventHandler(sf::RenderWindow &window, const sf::Event &event) {
    sf::Vector2u windowSize = window.getSize();

    if (sf::Event::Resized == event.type) {
        pad1.setPaddlePosition(window.getSize(),Paddle::side::right);
        pad2.setPaddlePosition(window.getSize(),Paddle::side::left);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::R))
        b.setPosition(windowSize.x/2 - b.getRadius(), windowSize.y/2 -b.getRadius());

}

void Pong::update(const sf::RenderWindow &window) {
    sf::Vector2u windowSize = window.getSize();

    pad1.movePaddle(windowSize, Paddle::direction::up, sf::Keyboard::Up);
    pad1.movePaddle(windowSize, Paddle::direction::down, sf::Keyboard::Down);
    pad2.movePaddle(windowSize, Paddle::direction::up, sf::Keyboard::W);
    pad2.movePaddle(windowSize, Paddle::direction::down, sf::Keyboard::S);

    b.bounce(windowSize,std::vector<sf::FloatRect>({pad1.getGlobalBounds(), pad2.getGlobalBounds()}));
}

void Pong::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(pad1);
    target.draw(pad2);
    target.draw(b);
}

Pong::Pong() {
    pad1.setPaddleSpeed(0.5);
    pad2.setPaddleSpeed(0.5);
}
