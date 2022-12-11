//
// Created by Sherman Yan on 12/9/22.
//

#include "topHatGuyComponent.h"

void topHatGuyComponent::eventHandler(sf::RenderWindow &window, const sf::Event &event) {
//    if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
//        t.setPosition((sf::Vector2f )sf::Mouse::getPosition(window));
//    }
    }

void topHatGuyComponent::update(const sf::RenderWindow &window) {
}

void topHatGuyComponent::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(t);
}

topHatGuyComponent::topHatGuyComponent() {
    t.setScale(2,2);
    t.setPosition(200,200);
}
