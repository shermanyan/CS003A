//
// Created by Sherman Yan on 12/7/22.
//

#include "Ball.h"
#include <SFML/Graphics.hpp>

void Ball::setSize(sf::Vector2f size) {
    setRadius(size.x);
}
