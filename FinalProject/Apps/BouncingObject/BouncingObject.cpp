//
// Created by Sherman Yan on 12/7/22.
//

#ifndef FINALPROJECT_BOUNCINGBALL_CPP
#define FINALPROJECT_BOUNCINGBALL_CPP

#include "BouncingObject.h"
template<class T>
void BouncingObject<T>::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    if(!checkStates(HIDDEN))
        target.draw(obj,states);
}

template<class T>
void BouncingObject<T>::eventHandler(sf::RenderWindow &window, const sf::Event &event) {
    if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Space))
        toggleState(PLAY);

}
template<class T>
void BouncingObject<T>::update(const sf::RenderWindow &window) {
    if (checkStates(PLAY))
        bounce(window.getSize());
}

template<class T>
BouncingObject<T>::BouncingObject(sf::Color ballColor):States{}{
    obj.setSize({20, 20});
    obj.setFillColor(ballColor);
    obj.setPosition(100,100);

    setState(PLAY,true);
}

template<class T>
void BouncingObject<T>::bounce(const sf::Vector2u &windowSize) {

    sf::FloatRect bPos = obj.getGlobalBounds();

    if ((bPos.top + bPos.height) >= windowSize.y || bPos.top <= 0)
        objSpeed.y *= -1;
    if ((bPos.left + bPos.width) >= windowSize.x || bPos.left <= 0)
        objSpeed.x *= -1;

    obj.move(objSpeed);
}


template<class T>
void BouncingObject<T>::setSpeed(const sf::Vector2f &speed) {
    this->objSpeed = speed;

}
template<class T>
void BouncingObject<T>::setSize(float size) {
    obj.setSize(size);
}

#endif