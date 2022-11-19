//
// Created by Sherman Yan on 10/10/22.
//

#include "bouncingBall.h"
#include <iostream>


void bouncingBall::bounce(const sf::Vector2u &windowSize){

    sf::FloatRect bPos = getGlobalBounds();

    if ((bPos.top + bPos.height) >= windowSize.y || bPos.top <= 0)
        ballSpeed.y *= -1;
    if ((bPos.left + bPos.width) >= windowSize.x || bPos.left <= 0)
        ballSpeed.x *= -1;

    move(ballSpeed);
}
void bouncingBall::setBallSpeed(const sf::Vector2f& ballSpeed){

    this->ballSpeed = ballSpeed;
}


void bouncingBall::bounce(const sf::Vector2u &windowSize, const std::vector<sf::FloatRect> & surfaces){
    sf::FloatRect bPos = getGlobalBounds();

    for(int i = 0; i< surfaces.size(); i ++){
        if ( surfaces[i].intersects(bPos)){
            ballSpeed.x *= -1;
            break;
        }
    }

    if ((bPos.top + bPos.height) >= windowSize.y || bPos.top <= 0) {
        ballSpeed.y *= -1;
    }

    move(ballSpeed);

}
void bouncingBall::bounce( const std::vector<sf::FloatRect> & surfaces){
    sf::FloatRect bPos = getGlobalBounds();
    srand(1);
    for(int i = 0; i< surfaces.size(); i ++){
        if ( surfaces[i].intersects(bPos)){
            ballSpeed.y *= -1;
            ballSpeed.x *= -1;
            break;
        }

    }

    move(ballSpeed);

}




