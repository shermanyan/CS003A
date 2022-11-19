//
// Created by Sherman Yan on 11/7/22.
//

#include "CardHandScorer.h"

PokerScore CardHandScorer::scorer(const CardHand &hand) {

    PokerScore score;
    std::vector<Card> h = hand.getHand();
    std::sort(h.begin(),h.end());

    if(isRFlush(h)){
        score += ROYAL_FLUSH;
        score += FLUSH;
        score += STRAIGHT_FLUSH;
        score += STRAIGHT;
    } else if(isSFlush(h)) {
        score += STRAIGHT_FLUSH;
        score += FLUSH;
        score += STRAIGHT;
    } else if(isFlush(h)){
        score += FLUSH;
    } else if(isStraight(h)){
        score += STRAIGHT;
    } else {
        switch (numPairs(h)) {
            case 1:
                score += ONE_PAIR;
                break;
            case 2:
                score += TWO_PAIR;
                break;
            case 3:
                score += THREE_OF_A_KIND;
                break;
            case 4:
                score += FULL_HOUSE;
                break;
            case 6:
                score += FOUR_OF_A_KIND;
                break;
            default:
                break;
        }
    }
    score += HIGH_CARD;

    return score;
}

bool CardHandScorer::isRFlush(const std::vector<Card> &cards) {
    ranks ROYALS[] = {ACE, TEN, JACK, QUEEN, KING};

    if (isFlush(cards)){
        for (int i = 0; i < cards.size(); ++i) {
            if (cards[i].getRank() != ROYALS[i])
                return false;
        }
        return true;
    }
    return false;
}

bool CardHandScorer::isSFlush(const std::vector<Card> &cards)  {
    return (isFlush(cards) && isStraight(cards));
}

bool CardHandScorer::isFlush(const std::vector<Card> &cards)  {
    for (int i = 0; i < cards.size()-1; ++i) {
        if (cards[i].getSuit() != cards[i + 1].getSuit())
            return false;
    }
    return true;
}

bool CardHandScorer::isStraight(const std::vector<Card> &cards)  {

    for (int i = 0; i < cards.size()-1; ++i) {
        if (cards[i].getRank()+ 1 != (cards[i + 1].getRank()))
            return false;
    }
    return true;
}

int CardHandScorer::numPairs(const std::vector<Card> &cards) {
    int pairs = 0;
    for (int i = 0; i < cards.size(); ++i) {
        for (int j = i+1; j < cards.size(); ++j) {
            if (cards[i] == cards[j]) {
                pairs++;
            }
        }
    }
    return pairs;
}

