//
// Created by Sherman Yan on 10/25/22.
//

#include "DrawableCard.h"

sf::Texture DrawableCard::heartImg;
sf::Texture DrawableCard::diamondImg;
sf::Texture DrawableCard::clubImg;
sf::Texture DrawableCard::spadeImg;

sf::Font DrawableCard::font;

void DrawableCard::loadCardAssets(){
    if(!heartImg.loadFromFile(suitFileName(HEARTS)))
        exit(21);
    if(!diamondImg.loadFromFile(suitFileName(DIAMONDS)))
        exit(21);
    if(!clubImg.loadFromFile(suitFileName(CLUBS)))
        exit(21);
    if(!spadeImg.loadFromFile(suitFileName(SPADES)))
        exit(21);
    if(!font.loadFromFile("display/fonts/Courier.ttf"))
        exit(20);
}

void DrawableCard::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    states.transform *= getTransform();
    window.draw(cardBackground,states);
    window.draw(rankTxt,states);
    window.draw(suitImg,states);

    sf::FloatRect c = cardBackground.getLocalBounds();
    sf::RenderStates r1State = states;
    window.draw(rankTxt,r1State.transform.rotate(180,{c.left + c.width/2 , c.top + c.height/2 }));
}

DrawableCard::DrawableCard(): DrawableCard(HEARTS,ACE) {
}

DrawableCard::DrawableCard(suits suit, ranks rank){
    Card::_suit = suit;
    Card::_rank = rank;
    init();
}

DrawableCard::DrawableCard(const Card& card): DrawableCard(card.getSuit(),card.getRank()){}


void DrawableCard::setFillColor(const sf::Color &color) {
    cardBackground.setFillColor(color);
}

void DrawableCard::setSize(sf::Vector2f size) {
    cardBackground.setSize(size);
    setRankSpecs();
    setSuitSpecs();
}

void DrawableCard::setSize(float x, float y) {
    setSize({x, y});
}

std::string DrawableCard::rankToString() const{
    switch (_rank) {
        case JACK:  return "J";
        case QUEEN: return "Q";
        case KING:  return "K";
        case ACE:   return "A";
        default:    return  std::to_string(_rank +1);
    }
}

std::string DrawableCard::suitFileName(suits suit) {
    switch (suit) {
        case HEARTS:    return "display/suits/heart.png";
        case DIAMONDS:  return "display/suits/diamond.png";
        case SPADES:    return "display/suits/spade.png";
        case CLUBS:     return "display/suits/club.png";
    }
}

void DrawableCard::init() {
    setUpBackground();
    setUpRank();
    setUpSuit();
}

void DrawableCard::setUpBackground() {
    setFillColor(bgColor);
    cardBackground.setSize(size);
}

void DrawableCard::setUpRank() {
    rankTxt.setFont(font);
    rankTxt.setString(rankToString());
    rankTxt.setLetterSpacing(-0.2);
    rankTxt.setPosition(cardBackground.getLocalBounds().width * 0.04 , 0);

    if (_suit == HEARTS || _suit == DIAMONDS)
        rankTxt.setFillColor(sf::Color::Red);
    else
        rankTxt.setFillColor(sf::Color::Black);

    setRankSpecs();
}

void DrawableCard::setRankSpecs() {
    rankTxt.setCharacterSize(cardBackground.getSize().y > 0? cardBackground.getSize().y/6 : 96);
}

void DrawableCard::setUpSuit() {

    switch (_suit) {
        case HEARTS:
            suitImg.setTexture(heartImg);
            break;
        case DIAMONDS:
            suitImg.setTexture(diamondImg);
            break;
        case CLUBS:
            suitImg.setTexture(clubImg);
            break;
        case SPADES:
            suitImg.setTexture(spadeImg);
            break;
    }

    sf::FloatRect s = suitImg.getLocalBounds();
    suitImg.setOrigin(s.width/2,s.height/2);
    setSuitSpecs();
}

void DrawableCard::setSuitSpecs() {

    float scaleFactor = 0.30;
    sf::FloatRect cPos = cardBackground.getLocalBounds(),sPos = suitImg.getLocalBounds();
    suitImg.setScale((cPos.height*scaleFactor)/sPos.height,(cPos.height*scaleFactor)/sPos.height);
    suitImg.setPosition(cPos.width/2 ,cPos.height/2);

}

void DrawableCard::setSuit(suits suit) {
    Card::setSuit(suit);
    setUpSuit();
    setUpRank();
}

void DrawableCard::setRank(ranks rank) {
    Card::setRank(rank);
    setUpSuit();
    setUpRank();
}

sf::Vector2f DrawableCard::getSize() {
    return cardBackground.getSize();
}

sf::FloatRect DrawableCard::getGlobalBounds() {
    return cardBackground.getGlobalBounds();
}





