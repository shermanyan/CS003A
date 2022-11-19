//
// Created by Sherman Yan on 10/10/22.
//

#ifndef BOUNCING_BALL_BOUNCINGBALL_H
#define BOUNCING_BALL_BOUNCINGBALL_H

#include <SFML/Graphics.hpp>
#include "paddle.h"

class bouncingBall : public sf::CircleShape{

private:
    sf::Vector2f ballSpeed = {1,1};
public:

    void bounce(const sf::Vector2u &windowSize);
    void bounce(const sf::Vector2u &windowSize, const std::vector<sf::FloatRect> & surfaces);
    void bounce(const std::vector<sf::FloatRect> & surfaces);
    void setBallSpeed(const sf::Vector2f& ballSpeed);

};


#endif //BOUNCING_BALL_BOUNCINGBALL_H
