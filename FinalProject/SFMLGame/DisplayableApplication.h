//
// Created by Sherman Yan on 12/6/22.
//

#ifndef FINALPROJECT_DISPLAYABLEAPPLICATION_H
#define FINALPROJECT_DISPLAYABLEAPPLICATION_H

#include <SFML/Graphics.hpp>
#include "AppComponent.h"
#include "Buttons/HomeButton.h"
#include "MouseEvents.h"

class DisplayableApplication{
private:
    std::vector<AppComponent*> components;
    sf::Color bgColor = sf::Color::Black;
    sf::Vector2u windowSize = {0,0};
    std::string windowName = "Default Game";

    HomeButton h;
    bool exitable = true;

public:
    DisplayableApplication();
    DisplayableApplication(const std::string& windowName);
    DisplayableApplication(const std::string& windowName, const sf::Color &bgColor);

    void disableExit();
    void setWindowSize(const sf::Vector2u& windowSize);
    void addComponent(AppComponent& component);
    void run(sf::RenderWindow&window);

};

#endif //FINALPROJECT_DISPLAYABLEAPPLICATION_H
