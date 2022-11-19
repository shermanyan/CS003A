//
// Created by Sherman Yan on 11/18/22.
//

#ifndef CS003A_DISPLAYWINDOW_H
#define CS003A_DISPLAYWINDOW_H
#include "SFML/Graphics.hpp"

class DisplayWindow {

private:
    std::vector<sf::Drawable*> components;
    sf::VideoMode videoMode;
    std::string windowName;
    sf::Color bgColor;
public:

    DisplayWindow();
    DisplayWindow(sf::VideoMode videoMode , std::string name, sf::Color backgroundColor);

    void setBgColor(const sf::Color &bgColor);
    void setComponents(const std::vector<sf::Drawable *> &components);
    void setVideoMode(const sf::VideoMode &videoMode);
    void setWindowName(const std::string &windowName);


    void addComponent(sf::Drawable& drawable);
    void run();
};


#endif //CS003A_DISPLAYWINDOW_H
