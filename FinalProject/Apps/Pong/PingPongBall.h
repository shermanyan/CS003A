//
// Created by Sherman Yan on 12/7/22.
//

#ifndef FINALPROJECT_PINGPONGBALL_H
#define FINALPROJECT_PINGPONGBALL_H

#include <SFML/Graphics.hpp>

class PingPongBall: public sf::CircleShape{
private:
    sf::Vector2f ballSpeed = {0.2,0.1};

public:
    PingPongBall();
    void setSpeed(const sf::Vector2f& speed);
    void bounce(const sf::Vector2u &windowSize, const std::vector<sf::FloatRect> & bounceSurfaces);


};


#endif //FINALPROJECT_PINGPONGBALL_H
