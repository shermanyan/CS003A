//
// Created by Sherman Yan on 11/17/22.
//

#ifndef CS003A_APPLICATION_H
#define CS003A_APPLICATION_H
#include <SFML/Graphics.hpp>
//#include "EventHandleable.h"
#include "Component.h"
#include <vector>
#include <string>

class Application {
private:
    std::vector<Component*> components;
    sf::VideoMode videoMode;
    std::string windowName;
    sf::Color bgColor;
public:
    Application();
    Application(sf::VideoMode videoMode , const std::string& name, sf::Color backgroundColor);

    void setBgColor(const sf::Color &bgColor);

    void addComponent(Component& component);
    void run();


};


#endif //CS003A_APPLICATION_H
