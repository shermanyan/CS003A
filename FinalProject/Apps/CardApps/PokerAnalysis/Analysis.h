//
// Created by Sherman Yan on 12/8/22.
//

#ifndef FINALPROJECT_ANALYSIS_H
#define FINALPROJECT_ANALYSIS_H

#include "Deck.h"
#include "CardHand.h"
#include "CardHandScorer.h"
#include "PokerAnalysisDisplay.h"


class Analysis {
    static void displayResults(const PokerScore& score);
public:
    static PokerScore simulate(int times);

};


#endif //FINALPROJECT_ANALYSIS_H
