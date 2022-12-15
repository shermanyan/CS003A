//
// Created by Sherman Yan on 12/7/22.
//

#ifndef FINALPROJECT_BUTTONBASE_H
#define FINALPROJECT_BUTTONBASE_H
#include "SFML/Graphics.hpp"
#include "AppComponent.h"
#include "MouseEvents.h"

template<class T>
class ButtonBase: public T{
public:
    void onClick(void (*f)(), const sf::RenderWindow& window);
    void onHover(void (*f)(), const sf::RenderWindow& window);
};

#include "ButtonBase.cpp"
#endif //FINALPROJECT_BUTTONBASE_H
