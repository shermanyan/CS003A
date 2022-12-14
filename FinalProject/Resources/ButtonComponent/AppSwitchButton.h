//
// Created by Sherman Yan on 12/8/22.
//

#ifndef FINALPROJECT_APPSWITCHBUTTON_H
#define FINALPROJECT_APPSWITCHBUTTON_H

#include <SFML/Graphics.hpp>
#include "AppsEnum.h"
#include "Application/AppComponent.h"
#include "Tools/States.h"
#include "statesEnum.h"

template<class T>
class AppSwitchButton: public AppComponent, public States {
private:
    T h;
    AppsEnum targetApp;
    sf::RenderWindow* window;

public:
    void eventHandler(sf::RenderWindow &window, const sf::Event &event) override;
    void update(const sf::RenderWindow &window) override;
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

    AppSwitchButton();
    void act();
    void (*action)() = act;
    void nextApp(AppsEnum app,sf::RenderWindow* window);
};

#include "AppSwitchButton.cpp"

#endif //FINALPROJECT_APPSWITCHBUTTON_H
