//
// Created by Sherman Yan on 11/7/22.
//

#ifndef CS003A_POKER_CARD_H
#define CS003A_POKER_CARD_H
#include <iostream>
#include "../enums/suits.h"
#include "../enums/ranks.h"
#include "SFML/Graphics.hpp"

class Card {
protected:
    suits _suit;
    ranks _rank;
private:

    std::string rankToString() const;
    std::string suitToString() const;

public:

    Card(suits suit, ranks rank);
    Card();

    suits getSuit() const;
    ranks getRank() const;

    void setSuit(suits suit);
    void setRank(ranks rank);

    friend std::ostream& operator<<(std::ostream& out, const Card& card);

    friend bool operator <(const Card& lhs, const Card& rhs);
    friend bool operator <=(const Card& lhs, const Card& rhs);
    friend bool operator >(const Card& lhs, const Card& rhs);
    friend bool operator >=(const Card& lhs, const Card& rhs);
    friend bool operator ==(const Card& lhs, const Card& rhs);

};
//#include "Card.cpp"

#endif //CS003A_POKER_CARD_H
