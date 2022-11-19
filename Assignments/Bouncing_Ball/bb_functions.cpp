//
// Created by Sherman Yan on 9/29/22.
//

#include "bb_functions.h"


void bounce(sf::Vector2u windowSize,sf::CircleShape &ball, sf::Vector2f &ballSpeed){


    if (ball.getPosition().x > windowSize.x - (ball.getRadius()*2)|| ball.getPosition().x < 0){
        ballSpeed.x *= -1;
    }
    if (ball.getPosition().y > windowSize.y -(ball.getRadius()*2) || ball.getPosition().y < 0){
        ballSpeed.y *= -1;
    }

    ball.move(ballSpeed.x,ballSpeed.y);

}