//
// Created by Sherman Yan on 11/17/22.
//

#ifndef CS003A_COMPONENT_H
#define CS003A_COMPONENT_H
#include <SFML/Graphics.hpp>
#include "EventHandleable.h"
#include "Updatable.h"

class AppComponent: public EventHandleable, public sf::Drawable, public Updatable{

};


#endif //CS003A_COMPONENT_H
