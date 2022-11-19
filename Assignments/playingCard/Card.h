//
// Created by Sherman Yan on 10/25/22.
//

#ifndef CS003A_CARD_H
#define CS003A_CARD_H
#include <SFML/Graphics.hpp>
#include <iostream>
#include "RankEnum.h"
#include "SuitEnum.h"


class Card : public sf::Drawable, public sf::Transformable{

private:
    sf::RectangleShape cardBackground;
    sf::Color bgColor;

    sf::Text rank;
    sf::Sprite suit;

    static sf::Texture texture;
    static sf::Font font;

    SuitEnum _suit;
    RankEnum _rank;

    std::string rankToString();
    std::string suitToString();

    void init();
    void setUpBackground();
    void setUpRank();
    void setUpSuit();

    void setRankSpecs();
    void setSuitSpecs();

public:
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

    Card();
    Card(SuitEnum suit, RankEnum rank);

    void setFillColor(const sf::Color& color);

    void setSize(sf::Vector2f size);
    void setSize(float width, float height);

    void setPosition(sf::Vector2f pos);
    void setPosition(float x, float y);


};


#endif //CS003A_CARD_H
