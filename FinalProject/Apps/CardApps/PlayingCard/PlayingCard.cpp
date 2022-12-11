//
// Created by Sherman Yan on 12/8/22.
//

#include "PlayingCard.h"

void PlayingCard::eventHandler(sf::RenderWindow &window, const sf::Event &event){

//    if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
//        c.setPosition((sf::Vector2f )sf::Mouse::getPosition(window));
//    }
}

void PlayingCard::update(const sf::RenderWindow &window) {

}

void PlayingCard::draw(sf::RenderTarget &target, sf::RenderStates states) const {
    target.draw(c);
}

PlayingCard::PlayingCard() {
    c.setPosition(100,100);
    c.setSize(200,320);
}
