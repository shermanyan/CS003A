//
// Created by Sherman Yan on 11/17/22.
//

#include "PokerAnalysisDisplay.h"


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


PokerAnalysisDisplay::PokerAnalysisDisplay() {
    init();
}

PokerAnalysisDisplay::PokerAnalysisDisplay(int runTimes,const PokerScore& scores):
PokerAnalysisDisplay()
{
    calcTotals(scores);
    this->runTimes = runTimes;
    init();
}




void PokerAnalysisDisplay::init() {

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

    for (int i = 0; i < NUM_HANDS; ++i) {
        hands[i] = DrawablePokerHand(PokerHands::getHand(Scores(i)));
    }
}

void PokerAnalysisDisplay::setupCardsPos() {
    hands[0].setPosition(220,110);
    for (int i = 1; i < NUM_HANDS ; ++i) {
        hands[i].setPosition(hands[i-1].getPosition().x, hands[i-1].getSize().y + hands[i-1].getPosition().y + rowSpace);
    }
}

void PokerAnalysisDisplay::setupHandTitles() {
    for (int i = 0; i < NUM_HANDS; ++i) {
        handNames[i].setFont(Fonts::getFont(SONO_BOLD));
        handNames[i].setString(scoreNames[i]);
        handNames[i].setFillColor(fontColor);
        handNames[i].setCharacterSize(20);
        handNames[i].setOrigin(0,handNames[i].getGlobalBounds().height/2);
    }
}

void PokerAnalysisDisplay::setupHandTitlePos() {
    for (int i = 0; i < NUM_HANDS ; ++i) {
        handNames[i].setPosition(30,hands[i].getPosition().y + (hands[i].getGlobalBounds().height/2));
    }
}


void PokerAnalysisDisplay::setupTitle() {
    title.setFont(Fonts::getFont(PTSERIF_BOLD));
    title.setString("Poker Analysis");
    title.setFillColor(fontColor);
    title.setCharacterSize(50);
    title.setPosition(30,20);
}

void PokerAnalysisDisplay::setupStats() {

    for (int i = 0; i < NUM_HANDS ; ++i) {
        stats[i].setFont(Fonts::getFont(SONO_BOLD));
        stats[i].setString("Odds: 1:" + calcOdds((float)total[i]));
        stats[i].setFillColor(fontColor);
        stats[i].setCharacterSize(20);
        stats[i].setOrigin(0,stats[i].getGlobalBounds().height/2);
    }
}

void PokerAnalysisDisplay::setupStatsPos() {
    for (int i = 0; i < NUM_HANDS ; ++i) {
        stats[i].setPosition(550,handNames[i].getPosition().y);
    }
}

void PokerAnalysisDisplay::setupRunCount() {

    runCount.setFont(Fonts::getFont(PTSERIF_BOLD));
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

void PokerAnalysisDisplay::eventHandler(sf::RenderWindow &window, const sf::Event &event) {

}

void PokerAnalysisDisplay::update(const sf::RenderWindow &window) {

}

void PokerAnalysisDisplay::draw(sf::RenderTarget &window, sf::RenderStates states) const {

    window.draw(title,states);
    window.draw(runCount,states);

    for (int i = 0; i < NUM_HANDS; ++i) {
        window.draw(hands[i],states);
        window.draw(handNames[i],states);
        window.draw(stats[i],states);

    }
}










