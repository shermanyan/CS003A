//
// Created by Sherman Yan on 10/10/22.
//

#include "paddle.h"

#include <iostream>

paddle::paddle(const sf::Vector2u &windowSize, const sf::Color &color) : paddle(windowSize,color,paddle::side::right) {}

paddle::paddle(const sf::Vector2u &windowSize, const sf::Color &color, const side& side) : paddle(windowSize,color, 0.25, {25,100},side) {}

paddle::paddle(const sf::Vector2u &windowSize,const sf::Color &color, float speed, const sf::Vector2f& size, const side& side)
    :paddleSpeed({speed, speed}), paddleSide(side){
    setFillColor(color);
    setPaddleSize(side,size);
    paddle::setPaddleSide(windowSize,side);

}

void paddle::movePaddle(const sf::Vector2u& range, const direction &direction, const sf::Keyboard::Key& key){

    if (sf::Keyboard::isKeyPressed(key)) {
        sf::FloatRect sbound = getGlobalBounds();
        sf::Vector2f nextPos = {direction.multiplier.x * paddleSpeed.x, direction.multiplier.y * paddleSpeed.y};

        if (sbound.left + nextPos.x >= 0 && (sbound.width + sbound.left + nextPos.x <= range.x) &&
            sbound.top + nextPos.y >= 0 && (sbound.height + sbound.top + nextPos.y <= range.y))
            move(direction.multiplier.x * paddleSpeed.x, direction.multiplier.y * paddleSpeed.y);
    }
}

void paddle::setPaddleSpeed(float speed) {
    this->paddleSpeed = {speed, speed};
}

void paddle::setPaddleSide(const sf::Vector2u &windowSize ,const side& side){

    if(side.sideIndex == paddle::side::right.sideIndex)
        setPosition(windowSize.x - getGlobalBounds().width,
                    windowSize.y/2 - getGlobalBounds().height/2);
    else if(side.sideIndex == paddle::side::left.sideIndex)
        setPosition(getGlobalBounds().left,
                    windowSize.y/2 - getGlobalBounds().height/2);
    else if(side.sideIndex == paddle::side::top.sideIndex)
        setPosition(windowSize.x/2 + getGlobalBounds().width/2,0);
    else if(side.sideIndex == paddle::side::bottom.sideIndex)
        setPosition(windowSize.x/2 + getGlobalBounds().width/2,windowSize.y - getGlobalBounds().height);

}

void paddle::setPaddleSize(const side& side, const sf::Vector2f &size){
    if(side.sideIndex == paddle::side::right.sideIndex || side.sideIndex == paddle::side::left.sideIndex)
        setSize(size);
    else if(side.sideIndex == paddle::side::top.sideIndex || side.sideIndex == paddle::side::bottom.sideIndex)
        setSize({size.y,size.x});

}




const paddle::direction paddle::direction::up(0, -1);
const paddle::direction paddle::direction::down(0, 1);
const paddle::direction paddle::direction::left(-1, 0);
const paddle::direction paddle::direction::right(1, 0);


const paddle::side paddle::side::top(2);
const paddle::side paddle::side::bottom(3);
const paddle::side paddle::side::left(1);
const paddle::side paddle::side::right(4);



