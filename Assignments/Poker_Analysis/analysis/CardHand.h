//
// Created by Sherman Yan on 11/8/22.
//

#ifndef CS003A_CARDHAND_H
#define CS003A_CARDHAND_H
#include <vector>
#include "Card.h"

class CardHand {
private:
    std::vector<Card> hand;
    const int MAX_SIZE = 5;

public:
    CardHand();
//    CardHand(Card card[5]);

    void addCard(const Card& card);

    std::vector<Card> getHand() const;
    unsigned int size() const;

    Card operator[](unsigned int index) const;
    friend std::ostream& operator<<(std::ostream& out, const CardHand& hand);

};


#endif //CS003A_CARDHAND_H





