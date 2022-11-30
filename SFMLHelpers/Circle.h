//
// Created by Sherman Yan on 11/22/22.
//

#ifndef SFMLHELPERS_CIRCLE_H
#define SFMLHELPERS_CIRCLE_H

#include "SFML/Graphics.hpp"
#include "States.h"

class Circle: public sf::Drawable, public States{
private:
    sf::CircleShape circ;
protected:
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;

public:
    explicit Circle();
};


#endif //SFMLHELPERS_CIRCLE_H
