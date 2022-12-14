//
// Created by Sherman Yan on 12/8/22.
//

#ifndef FINALPROJECT_GREENBALL_H
#define FINALPROJECT_GREENBALL_H
#include "Application/AppComponent.h"

class GreenBall: public AppComponent{
private:
    sf::CircleShape ball;
public:
    GreenBall();

    void eventHandler(sf::RenderWindow &window, const sf::Event &event) override;
    void update(const sf::RenderWindow &window) override;
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //FINALPROJECT_GREENBALL_H
