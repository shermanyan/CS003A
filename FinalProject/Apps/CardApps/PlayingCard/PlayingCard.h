//
// Created by Sherman Yan on 12/8/22.
//

#ifndef FINALPROJECT_PLAYINGCARD_H
#define FINALPROJECT_PLAYINGCARD_H
#include "Application/AppComponent.h"
#include "DrawableCard.h"
#include "Tools/MouseEvents.h"

class PlayingCard: public AppComponent{
private:
    DrawableCard c;
public:
    PlayingCard();
    void eventHandler(sf::RenderWindow &window, const sf::Event &event) override;
    void update(const sf::RenderWindow &window) override;
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //FINALPROJECT_PLAYINGCARD_H
