//
// Created by Sherman Yan on 12/9/22.
//

#ifndef FINALPROJECT_TOPHATGUYCOMPONENT_H
#define FINALPROJECT_TOPHATGUYCOMPONENT_H

#include "AppComponent.h"
#include "topHatGuy.h"

class topHatGuyComponent: public AppComponent{
private:
    topHatGuy t;
public:
    topHatGuyComponent();
    void eventHandler(sf::RenderWindow &window, const sf::Event &event) override;
    void update(const sf::RenderWindow &window) override;
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //FINALPROJECT_TOPHATGUYCOMPONENT_H
