//
// Created by Sherman Yan on 11/14/22.
//

#include "DrawablePokerHand.h"

void DrawablePokerHand::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    states.transform *= getTransform();

    for (int i = 0; i < drawableHand.size(); ++i) {
        window.draw(drawableHand[i],states);
    }
}

DrawablePokerHand::DrawablePokerHand() : DrawablePokerHand(PokerHands::RoyalFlush){}

DrawablePokerHand::DrawablePokerHand(const CardHand &hand) {
    for (int i = 0; i < hand.size() && i < MAX_SIZE; ++i) {
        drawableHand.emplace_back(hand[i]);
    }
    init();
}
DrawablePokerHand::DrawablePokerHand(const PokerHands &hand) : DrawablePokerHand(hand._hand){}

void DrawablePokerHand::init() {
    for (int i = 1; i < drawableHand.size(); ++i) {
        drawableHand[i].setPosition((drawableHand[i-1].getSize().x + drawableHand[i-1].getPosition().x ) + cardSpacing, 0);
    }
}

void DrawablePokerHand::setCardSpacing(float cardSpacing) {
    this->cardSpacing = cardSpacing;
}

void DrawablePokerHand::setSize(sf::Vector2f size) {
    for (int i = 0; i < drawableHand.size(); ++i) {
        drawableHand[i].setSize(size);
    }
}

sf::FloatRect DrawablePokerHand::getGlobalBounds() {
    sf::FloatRect bounds;

    bounds.left = drawableHand[0].getPosition().x;
    bounds.top = drawableHand[0].getPosition().y;
    bounds.width = (drawableHand[0].getSize().x + cardSpacing) * (float)(drawableHand.size()) - cardSpacing;
    bounds.height = drawableHand[0].getSize().y;

    return bounds;
}

sf::Vector2f DrawablePokerHand::getSize() {
    sf::Vector2f size;

    size.x = getGlobalBounds().width;
    size.y = getGlobalBounds().height;
    return size;
}



