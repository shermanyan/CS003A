//
// Created by Sherman Yan on 11/14/22.
//

#ifndef CS003A_POKERHANDS_H
#define CS003A_POKERHANDS_H

#include "../../analysis/CardHand.h"
#include "../../analysis/PokerScore.h"
struct PokerHands{

private:
    PokerHands(std::vector<Card> cards){
        for (int i = 0; i < 5; ++i) {
            _hand.addCard(cards[i]);
        }
    }

public:
    CardHand _hand;
    static PokerHands getHand(Scores score);
    static const PokerHands RoyalFlush;
    static const PokerHands StraightFlush;
    static const PokerHands FourOfAKind;
    static const PokerHands FullHouse;
    static const PokerHands Flush;
    static const PokerHands Straight;
    static const PokerHands ThreeOfAKind;
    static const PokerHands TwoPair;
    static const PokerHands OnePair;
    static const PokerHands HighCard;

};


#endif //CS003A_POKERHANDS_H
