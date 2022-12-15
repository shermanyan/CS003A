//
// Created by Sherman Yan on 11/17/22.
//

#ifndef CS003A_POKERANALYSISDISPLAY_H
#define CS003A_POKERANALYSISDISPLAY_H
#include <SFML/Graphics.hpp>
#include "DrawablePokerHand.h"
#include "AppComponent.h"

class PokerAnalysisDisplay: public AppComponent {

private:
    int total[10] = {0,0,0,0,0,0,0,0,0,0};
    int runTimes = 0;
    float rowSpace = 10;
    static const int NUM_HANDS = 10;

    static std::string scoreNames[10];

    static sf::Color fontColor;
    DrawablePokerHand hands[10];
    sf::Text handNames[10];
    sf::Text stats[10];
    sf::Text title;
    sf::Text runCount;

    void init();
    void setupTitle();
    void setupRunCount();
    void setupCards();
    void setupCardsPos();
    void setupHandTitles();
    void setupHandTitlePos();
    void setupStats();
    void setupStatsPos();

    std::string calcOdds(float wins);

    void calcTotals(const PokerScore& scores);

public:
    PokerAnalysisDisplay();
    PokerAnalysisDisplay(int runTimes,const PokerScore& scores);

    virtual void eventHandler(sf::RenderWindow &window, const sf::Event &event);
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    virtual void update(const sf::RenderWindow &window) override;

};


#endif //CS003A_POKERANALYSISDISPLAY_H
