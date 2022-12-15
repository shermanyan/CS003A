//
// Created by Sherman Yan on 12/14/22.
//

#include "Vessel.h"
#include <iostream>

float Vessel::MAX_SPEED = 5;

Vessel::Vessel() {
    setTexture(Textures::getTexture(VESSEL));

    sf::FloatRect p = getLocalBounds();
    setOrigin(p.left + p.width/2,p.top +p.height/2);

    setSize({100, 100});
}


void Vessel::move(const sf::RenderWindow& window) {
    float speed = 0;

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
        speed += boost;
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)){

        speed += -boost/10;
    }
    if (!(abs(velocity.x) > 0.1 || abs(velocity.y) > 0.1)) {
        velocity.x += speed * sin(getRotation() * 3.14f / 180);
        velocity.y += speed * -cos(getRotation() * 3.14f / 180);
    }


    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        rotate(-0.05);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        rotate(0.05);


    sf::FloatRect pos = getGlobalBounds();
    if(pos.left + pos.width + velocity.x > window.getSize().x || pos.left + velocity.x < 0)
        velocity.x = 0;
    if(pos.top + pos.height + velocity.y > window.getSize().y || pos.top + velocity.y < 0)
        velocity.y = 0;



    SpriteImage::move(velocity.x,velocity.y);
}

float Vessel::getSign(float number) {
    return number > 0? 1:-1;
}




