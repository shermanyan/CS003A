//
// Created by Sherman Yan on 11/8/22.
//

#include "analysis/Deck.h"
#include "analysis/CardHand.h"
#include "analysis/CardHandScorer.h"
#include "display/PokerAnalysisDisplay.h"

PokerScore simulate(int times);
void displayResults(const int total[]);

int main(){
    DrawableCard::loadCardAssets();
    srand(time(0));

    int totalScores[10] = {0,0,0,0,0,0,0,0,0,0};

    int runTimes = 650000;

    PokerScore scores = simulate(runTimes);

    for (int i = 0; i < scores.size(); i++){
        totalScores[scores[i]]++;
    }
    displayResults(totalScores);

    PokerAnalysisDisplay display(runTimes,scores);
    display.run();

    return 0;
}

PokerScore simulate(int times){

    PokerScore total;

    for (int i = 0; i < times; i++){
        Deck d;
        CardHand h;
        for (int j = 0; j < 5; ++j) {
            h.addCard(d.deal());
        }
        total += CardHandScorer::scorer(h);
    }
    return total;
}


void displayResults(const int total[]){
    std::cout <<"ROYAL_FLUSH: " << total[0] << std::endl;
    std::cout <<"STRAIGHT_FLUSH: "<< total[1] << std::endl;
    std::cout <<"FOUR_OF_A_KIND: "<< total[2] << std::endl;
    std::cout <<"FULL_HOUSE: "<< total[3] << std::endl;
    std::cout <<"FLUSH: "<< total[4] << std::endl;
    std::cout <<"STRAIGHT: "<< total[5] << std::endl;
    std::cout <<"THREE_OF_A_KIND: "<< total[6] << std::endl;
    std::cout <<"TWO_PAIR: "<< total[7] << std::endl;
    std::cout <<"ONE_PAIR: "<< total[8] << std::endl;
    std::cout <<"HIGH_CARD: "<< total[9] << std::endl;
}