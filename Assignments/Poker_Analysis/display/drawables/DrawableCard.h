//
// Created by Sherman Yan on 10/25/22.
//

#ifndef CS003A_CARD_H
#define CS003A_CARD_H
#include <SFML/Graphics.hpp>
#include "../../analysis/Card.h"

class DrawableCard : public sf::Drawable, public sf::Transformable, public Card{

private:

    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

    sf::Vector2f size = {50, 80};

    sf::RectangleShape cardBackground;
    sf::Color bgColor = sf::Color::White;

    sf::Text rankTxt;
    sf::Sprite suitImg;

    static sf::Texture heartImg;
    static sf::Texture diamondImg;
    static sf::Texture clubImg;
    static sf::Texture spadeImg;

    static sf::Font font;

    std::string rankToString() const;
    static std::string suitFileName(suits suit);

    void init();
    void setUpBackground();
    void setUpRank();
    void setUpSuit();

    void setRankSpecs();
    void setSuitSpecs();

public:

    static void loadCardAssets();

    DrawableCard();
    DrawableCard(suits suit, ranks rank);
    DrawableCard(const Card& card);

    void setFillColor(const sf::Color& color);

    void setSize(sf::Vector2f size);
    void setSize(float width, float height);

    void setSuit(suits suit);
    void setRank(ranks rank);

    sf::Vector2f getSize();

    sf::FloatRect getGlobalBounds();
};


#endif //CS003A_CARD_H
