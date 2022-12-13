//
// Created by Sherman Yan on 12/12/22.
//

#include "Play.h"

Play::Play() {
    button.setSize({150, 75});
    play.setFont(Fonts::getFont(SONO_BOLD));
    play.setCharacterSize(button.getSize().y/2);
    play.setString("PLAY");
    play.setFillColor(sf::Color::Black);

    setTextPos();
}


void Play::setSize(const sf::Vector2f &size) {
    play.setCharacterSize(size.y/3);
    setTextPos();
}


void Play::hover(const sf::RenderWindow &window) {

    if(MouseEvents::isHover(button,window))
        button.setFillColor({180, 180, 180});
    else
        button.setFillColor({220,220,220});

}

void Play::draw(sf::RenderTarget &target, sf::RenderStates states) const {

    states.transform *= getTransform();

    target.draw(button);
    target.draw(play,states);
}

sf::FloatRect Play::getGlobalBounds() const {
    return button.getGlobalBounds();
}

void Play::setPosition(const sf::Vector2f &pos) {
    Transformable::setPosition(pos);
    button.setPosition(pos);
}

void Play::setTextPos() {
    Position::center(play,button);
    play.setPosition(play.getPosition().x , play.getPosition().y - 12);

}


