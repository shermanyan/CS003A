//
// Created by Sherman Yan on 12/7/22.
//

#include "PingPongBall.h"

PingPongBall::PingPongBall() {
    setRadius(25);
    setFillColor(sf::Color(245, 245, 245));
}

void PingPongBall::bounce(const sf::Vector2u &windowSize, const std::vector<sf::FloatRect> &bounceSurfaces) {

    sf::FloatRect bPos = getGlobalBounds();

    for(int i = 0; i< bounceSurfaces.size(); i ++) {
        if (bounceSurfaces[i].intersects(bPos)) {
            ballSpeed.x *= -1;
            break;
        }
    }

    if ((bPos.top + bPos.height) > windowSize.y || bPos.top < 0) {
        ballSpeed.y *= -1;
    }
    move(ballSpeed);
}

void PingPongBall::setSpeed(const sf::Vector2f &speed) {
    ballSpeed = speed;
}


