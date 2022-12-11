//
// Created by Sherman Yan on 12/8/22.
//

#include "GreenBall.h"

GreenBall::GreenBall() {

    ball.setRadius(50);
    ball.setFillColor(sf::Color::Green);
    ball.setPosition(100,100);

}

void GreenBall::eventHandler(sf::RenderWindow &window, const sf::Event &event) {

}

void GreenBall::update(const sf::RenderWindow &window) {

}

void GreenBall::draw(sf::RenderTarget &target, sf::RenderStates states) const {

    target.draw(ball);
}
