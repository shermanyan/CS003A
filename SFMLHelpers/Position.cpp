//
// Created by Sherman Yan on 11/22/22.
//

#ifndef SFMLHELPERS_POSITION_CPP
#define SFMLHELPERS_POSITION_CPP

#include "Position.h"

template<class T, class S>
void Position::left(const T &obj1, S &obj2, float spacing) {
    sf::FloatRect b1 = obj1.getGobalBounds();
    sf::FloatRect b2 = obj2.getGobalBounds();

    obj2.setPosition();

}

template<class T, class S>
void Position::right(const T &obj1, S &obj2, float spacing) {

}

template<class T, class S>
void Position::center(const T &obj1, S &obj2, float spacing) {

}

template<class T, class S>
void Position::bottom(const T &obj1, S &obj2, float spacing) {

}

#endif