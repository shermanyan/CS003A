//
// Created by Sherman Yan on 11/17/22.
//

#include "PokerAnalysisDisplay.h"

sf::Font PokerAnalysisDisplay::font;
sf::Font PokerAnalysisDisplay::titleFont;
sf::Color PokerAnalysisDisplay::fontColor = {189, 154, 122};

std::string PokerAnalysisDisplay::scoreNames[10] = {"Royal Flush" ,
                                                  "Straight Flush" ,
                                                  "Four of a Kind",
                                                  "Full House",
                                                  "Flush",
                                                  "Straight",
                                                  "Three of a Kind",
                                                  "Two Pair",
                                                  "One Pair",
                                                  "High Card"};


PokerAnalysisDisplay::PokerAnalysisDisplay() :
DisplayWindow({800,1050},"Poker Analysis",sf::Color(53, 101, 77))
{}

PokerAnalysisDisplay::PokerAnalysisDisplay(int runTimes,const PokerScore& scores):PokerAnalysisDisplay()
{
    DisplayWindow::addComponent(*this);

    calcTotals(scores);
    this->numHands = numHands;
    this->runTimes = runTimes;
    init();
}




void PokerAnalysisDisplay::draw(sf::RenderTarget &window, sf::RenderStates states) const {
    states.transform *= getTransform();

    window.draw(title,states);
    window.draw(runCount,states);

    for (int i = 0; i < numHands; ++i) {
        window.draw(hands[i],states);
        window.draw(handNames[i],states);
        window.draw(stats[i],states);

    }
}

void PokerAnalysisDisplay::init() {
    if(!font.loadFromFile("display/fonts/Sono-Bold.ttf"))
        exit(20);
    if(!titleFont.loadFromFile("display/fonts/PTSerif-Bold.ttf"))
        exit(21);

    setupTitle();
    setupRunCount();
    setupCards();
    setupCardsPos();
    setupHandTitles();
    setupHandTitlePos();
    setupStats();
    setupStatsPos();
}

void PokerAnalysisDisplay::setupCards() {

    for (int i = 0; i < numHands; ++i) {
        hands[i] = DrawablePokerHand(PokerHands::getHand(Scores(i)));
    }
}

void PokerAnalysisDisplay::setupCardsPos() {
    hands[0].setPosition(220,110);
    for (int i = 1; i < numHands ; ++i) {
        hands[i].setPosition(hands[i-1].getPosition().x, hands[i-1].getSize().y + hands[i-1].getPosition().y + rowSpace);
    }
}

void PokerAnalysisDisplay::setupHandTitles() {
    for (int i = 0; i < numHands; ++i) {
        handNames[i].setFont(font);
        handNames[i].setString(scoreNames[i]);
        handNames[i].setFillColor(fontColor);
        handNames[i].setCharacterSize(20);
        handNames[i].setOrigin(0,handNames[i].getGlobalBounds().height/2);
    }
}

void PokerAnalysisDisplay::setupHandTitlePos() {
    for (int i = 0; i < numHands ; ++i) {
        handNames[i].setPosition(30,hands[i].getPosition().y + (hands[i].getGlobalBounds().height/2));
    }
}

void PokerAnalysisDisplay::setNumHands(int numHands) {
    PokerAnalysisDisplay::numHands = numHands;
}

void PokerAnalysisDisplay::setupTitle() {
    title.setFont(titleFont);
    title.setString("Poker Analysis");
    title.setFillColor(fontColor);
    title.setCharacterSize(50);
    title.setPosition(30,20);
}

void PokerAnalysisDisplay::setupStats() {

    for (int i = 0; i < numHands ; ++i) {
        stats[i].setFont(font);
        stats[i].setString("Odds: 1:" + calcOdds((float)total[i]));
        stats[i].setFillColor(fontColor);
        stats[i].setCharacterSize(20);
        stats[i].setOrigin(0,stats[i].getGlobalBounds().height/2);
    }
}

void PokerAnalysisDisplay::setupStatsPos() {
    for (int i = 0; i < numHands ; ++i) {
        stats[i].setPosition(550,handNames[i].getPosition().y);
    }
}

void PokerAnalysisDisplay::setupRunCount() {

    runCount.setFont(font);
    runCount.setString("Run Count: " + std::to_string(runTimes));
    runCount.setFillColor(fontColor);
    runCount.setPosition(475,48);
    runCount.setCharacterSize(25);
}

std::string PokerAnalysisDisplay::calcOdds(float wins) {
    if (wins == 0)
        return "0";
    else {
        float odds = ((float) runTimes - (float) wins) / (float) wins;
        return odds == 0 ?  "1" : std::to_string(odds).substr(0, std::to_string(odds).find('.') + 3);
    }

}

void PokerAnalysisDisplay::calcTotals(const PokerScore &scores) {

    for (int i = 0; i < scores.size(); i++){
        total[scores[i]]++;
    }

}










