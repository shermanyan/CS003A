//
// Created by Sherman Yan on 11/17/22.
//

#ifndef CS003A_POKERANALYSISDISPLAY_H
#define CS003A_POKERANALYSISDISPLAY_H
#include <SFML/Graphics.hpp>
#include "DisplayWindow.h"
#include "drawables/DrawablePokerHand.h"

class PokerAnalysisDisplay: public DisplayWindow, private sf::Drawable, private sf::Transformable {

private:
    int total[10] = {0,0,0,0,0,0,0,0,0,0};
    int runTimes = 0;
    float rowSpace = 10;
    int numHands = 10;

    static sf::Font font;
    static sf::Font titleFont;
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

    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

public:
    PokerAnalysisDisplay();
    PokerAnalysisDisplay(int runTimes,const PokerScore& scores);

    void setNumHands(int numHands);
};


#endif //CS003A_POKERANALYSISDISPLAY_H
