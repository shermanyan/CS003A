//
// Created by Sherman Yan on 11/17/22.
//

#ifndef CS003A_EVENTHANDLEABLE_H
#define CS003A_EVENTHANDLEABLE_H
#include <SFML/Graphics.hpp>

class EventHandleable {
public:
    virtual void eventHandler(const sf::RenderWindow& window, const sf::Event& event);
};


#endif //CS003A_EVENTHANDLEABLE_H
