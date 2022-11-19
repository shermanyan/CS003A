//
// Created by Sherman Yan on 10/25/22.
//

#include "Card.h"

sf::Texture Card::texture;
sf::Font Card::font;


void Card::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    states.transform = getTransform();
    window.draw(cardBackground,states);
    window.draw(rank,states);

    sf::FloatRect c = cardBackground.getGlobalBounds();
    sf::RenderStates r1State = states;
    window.draw(rank,r1State.transform.rotate(180,{c.left + c.width/2 , c.top + c.height/2 }));

    window.draw(suit,states);
}

Card::Card() : Card(HEARTS,ACE) {}

Card::Card(SuitEnum suit, RankEnum rank) : _suit(suit), _rank(rank), bgColor(sf::Color::White){
    init();
}

void Card::setPosition(sf::Vector2f pos) {
    sf::Transformable::setPosition(pos);
}

void Card::setPosition(float x, float y) {
    setPosition({x, y});
}

void Card::setFillColor(const sf::Color &color) {
    cardBackground.setFillColor(color);
}

void Card::setSize(sf::Vector2f size) {
    cardBackground.setSize(size);
    setRankSpecs();
    setSuitSpecs();
}

void Card::setSize(float x, float y) {
    setSize({x, y});
}

std::string Card::rankToString() {
    switch (_rank) {
        case JACK:  return " J";
        case QUEEN: return " Q";
        case KING:  return " K";
        default:    return " " + std::to_string(_rank +1);
    }
}

std::string Card::suitToString() {
    switch (_suit) {
        case HEARTS:    return "suits/heart.png";
        case DIAMONDS:  return "suits/diamond.png";
        case SPADES:    return "suits/spade.png";
        case CLUBS:     return "suits/club.png";
        default:        break;
    }
}

void Card::init() {
    setUpBackground();
    setUpRank();
    setUpSuit();
}

void Card::setUpBackground() {
    setFillColor(bgColor);
    cardBackground.setSize({420, 620});
}

void Card::setUpRank() {
    if(!font.loadFromFile("fonts/Courier.ttf"))
        exit(20);

    rank.setFont(font);
    rank.setString(rankToString());
    rank.setLetterSpacing(-1);

    if (_suit == HEARTS || _suit == DIAMONDS)
        rank.setFillColor(sf::Color::Red);
    else
        rank.setFillColor(sf::Color::Black);

    setRankSpecs();
}

void Card::setRankSpecs() {
    rank.setCharacterSize(cardBackground.getSize().y > 0? cardBackground.getSize().y/6 : 96);
}

void Card::setUpSuit() {
    if(!texture.loadFromFile(suitToString()))
        exit(21);

    suit.setTexture(texture);

    sf::FloatRect s = suit.getGlobalBounds();

    suit.setOrigin(s.width/2,s.height/2);

    setSuitSpecs();
}

void Card::setSuitSpecs() {

    float scaleFactor = 0.30;
    sf::FloatRect cPos = cardBackground.getGlobalBounds(),sPos = suit.getGlobalBounds();
    suit.setScale((cPos.height*scaleFactor)/sPos.height,(cPos.height*scaleFactor)/sPos.height);
    suit.setPosition(cPos.width/2 ,cPos.height/2);

}




