//
// Created by Sherman Yan on 12/7/22.
//

#include "Paddle.h"

Paddle::Paddle(const sf::Vector2u &windowSize, const sf::Color &color) : Paddle(windowSize,color,Paddle::side::right) {}

Paddle::Paddle(const sf::Vector2u &windowSize, const sf::Color &color, const side& side) : Paddle(windowSize,color, 14, {25,100},side) {}

Paddle::Paddle(const sf::Vector2u &windowSize,const sf::Color &color, float speed, const sf::Vector2f& size, const side& side)
        :paddleSpeed({speed, speed}), paddleSide(side){
    setFillColor(color);
    setSize(size);
    Paddle::setPaddlePosition(windowSize,side);

}

void Paddle::movePaddle(const sf::Vector2u& range, const direction &direction, const sf::Keyboard::Key& key){

    if (sf::Keyboard::isKeyPressed(key)) {
        sf::FloatRect sbound = getGlobalBounds();
        sf::Vector2f nextPos = {direction.multiplier.x * paddleSpeed.x, direction.multiplier.y * paddleSpeed.y};

        if (sbound.left + nextPos.x >= 0 && (sbound.width + sbound.left + nextPos.x <= range.x) &&
            sbound.top + nextPos.y >= 0 && (sbound.height + sbound.top + nextPos.y <= range.y))
            move(direction.multiplier.x * paddleSpeed.x, direction.multiplier.y * paddleSpeed.y);
    }
}

void Paddle::setPaddleSpeed(float speed) {
    this->paddleSpeed = {speed, speed};
}

void Paddle::setPaddlePosition(const sf::Vector2u &windowSize ,const side& side){
    sf::FloatRect pos = getLocalBounds();
    if(side.sideIndex == Paddle::side::right.sideIndex)
        setPosition(windowSize.x - pos.width,windowSize.y/2 - pos.height/2);
    else if(side.sideIndex == Paddle::side::left.sideIndex)
        setPosition(pos.left,windowSize.y/2 - pos.height/2);
}

const Paddle::direction Paddle::direction::up(0, -1);
const Paddle::direction Paddle::direction::down(0, 1);

const Paddle::side Paddle::side::left(1);
const Paddle::side Paddle::side::right(4);
