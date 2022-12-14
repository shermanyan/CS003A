//
// Created by Jessie Mejia on 11/22/22.
//
#ifndef CLASSEXAMPLE1122_MOUSEEVENTS_CPP
#define CLASSEXAMPLE1122_MOUSEEVENTS_CPP

#include "MouseEvents.h"
#include <iostream>
template<class T>
bool MouseEvents::isHover(const T &Obj, const sf::RenderWindow &window) {
    sf::Vector2f mpos = (sf::Vector2f)sf::Mouse::getPosition(window);
    return Obj.getGlobalBounds().contains(mpos);
}

template<class T>
bool MouseEvents::isClick(const T &Obj, const sf::RenderWindow &window) {
//    std::cout << isHover(Obj, window);
    return isHover(Obj, window) && sf::Mouse::isButtonPressed(sf::Mouse::Left);
}

#endif