//
// Created by Sherman Yan on 11/17/22.
//

#ifndef CS003A_SQUARE_H
#define CS003A_SQUARE_H
#include "Component.h"

class Square: public Component{
private:
    sf::RectangleShape square;
    bool redState = true;
public:
    Square();
    virtual void eventHandler(const sf::RenderWindow& window, const sf::Event& event);
    virtual void update();
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;

};


#endif //CS003A_SQUARE_H
