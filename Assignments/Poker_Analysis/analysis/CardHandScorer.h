//
// Created by Sherman Yan on 11/7/22.
//

#ifndef CS003A_CARDHANDSCORER_H
#define CS003A_CARDHANDSCORER_H

#include "PokerScore.h"
#include "CardHand.h"
#include <algorithm>

class CardHandScorer{

private:
    static bool isRFlush(const std::vector<Card>& cards);
    static bool isSFlush(const std::vector<Card>& cards);
    static bool isFlush(const std::vector<Card>& cards);
    static bool isStraight(const std::vector<Card>& cards);
    static int numPairs(const std::vector<Card> &cards);

public:
    static PokerScore scorer(const CardHand& hand);

};


#endif //CS003A_CARDHANDSCORER_H
