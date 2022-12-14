//
// Created by Sherman Yan on 12/8/22.
//

#ifndef FINALPROJECT_ACTIONBUTTON_CPP
#define FINALPROJECT_ACTIONBUTTON_CPP

#include "AppSwitchButton.h"
#include "AppDriver.h"

template<class T>
AppSwitchButton<T>::AppSwitchButton() {
    setState(HIDDEN,false);
}
template<class T>
void AppSwitchButton<T>::eventHandler(sf::RenderWindow &window, const sf::Event &event) {
    h.onClick(action,window);
//    h.onHover(action,window);
}
template<class T>
void AppSwitchButton<T>::update(const sf::RenderWindow &window) {

}
template<class T>
void AppSwitchButton<T>::draw(sf::RenderTarget &target, sf::RenderStates states) const {

    if(!checkStates(HIDDEN))
        target.draw(h,states);
}
template<class T>
void AppSwitchButton<T>::nextApp(AppsEnum app, sf::RenderWindow *window) {
    targetApp = app;
    this->window = window;
}

template<class T>
void AppSwitchButton<T>::act() {
    AppDriver::openApp(targetApp, *window);
}

#endif