//
// Created by Sherman Yan on 11/14/22.
//

#ifndef CS003A_DRAWABLEPOKERHAND_H
#define CS003A_DRAWABLEPOKERHAND_H

#include "DrawableCard.h"
#include "CardHand.h"
#include "PokerHands.h"

class DrawablePokerHand : public sf::Drawable, public sf::Transformable{

private:
    std::vector<DrawableCard> drawableHand;
    static const int MAX_SIZE = 5;

    float cardSpacing = 10;

    void init();

public:

    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

    DrawablePokerHand();
    DrawablePokerHand(const CardHand &hand);
    DrawablePokerHand(const PokerHands &hand);

    void setCardSpacing(float cardSpacing);

    void setSize(sf::Vector2f size);
    sf::Vector2f getSize();
    sf::FloatRect getGlobalBounds();

};


#endif //CS003A_DRAWABLEPOKERHAND_H
