//
// Created by Sherman Yan on 12/7/22.
//
#ifndef FINALPROJECT_BUTTON_CPP
#define FINALPROJECT_BUTTON_CPP

#include "ButtonBase.h"

template<class T>
void ButtonBase<T>::onClick(void (*f)(),const sf::RenderWindow& window) {
    if (MouseEvents::isClick(*this,window))
    {
        f();
    }
}

template<class T>
void ButtonBase<T>::onHover(void (*f)(),const sf::RenderWindow& window) {
    if (MouseEvents::isHover(*this,&window))
    {
        f();
    }

}
#endif


