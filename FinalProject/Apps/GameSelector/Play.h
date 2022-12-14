//
// Created by Sherman Yan on 12/12/22.
//

#ifndef FINALPROJECT_PLAY_H
#define FINALPROJECT_PLAY_H
#include <SFML/Graphics.hpp>
#include "Tools/Fonts.h"
#include "Tools/States.h"
#include "Tools/Position.h"
#include "Tools/MouseEvents.h"

class Play: public sf::Drawable, public sf::Transformable, public States {
private:
    sf::Text play;
    sf::RectangleShape button;

    void setTextPos();
public:
    Play();

    void setSize(const sf::Vector2f &size);

    sf::FloatRect getGlobalBounds()const ;
    void hover(const sf::RenderWindow &window);

    void setPosition(const sf::Vector2f& pos);

private:
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //FINALPROJECT_PLAY_H
