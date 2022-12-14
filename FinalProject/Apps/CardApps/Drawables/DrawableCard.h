//
// Created by Sherman Yan on 10/25/22.
//

#ifndef CS003A_CARD_H
#define CS003A_CARD_H
#include <SFML/Graphics.hpp>
#include "Card.h"
#include "Tools/Textures.h"
#include "Tools/Fonts.h"

class DrawableCard : public sf::Drawable, public sf::Transformable, public Card{
private:

    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

    sf::Vector2f size = {50, 80};

    sf::RectangleShape cardBackground;
    sf::Color bgColor = sf::Color::White;

    sf::Sprite suitImg;
    sf::Text rankTxt;

    std::string rankToString() const;

    void init();
    void setUpBackground();
    void setUpRank();
    void setUpSuit();

    void setRankSpecs();
    void setSuitSpecs();

public:

    DrawableCard();
    DrawableCard(suits suit, ranks rank);
    DrawableCard(const Card& card);

    void setFillColor(const sf::Color& color);

    void setSize(sf::Vector2f size);
    void setSize(float width, float height);

    void setSuit(suits suit);
    void setRank(ranks rank);

    sf::Vector2f getSize() const;
    sf::FloatRect getGlobalBounds() const;
};


#endif //CS003A_CARD_H
