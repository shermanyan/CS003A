//
// Created by Sherman Yan on 11/8/22.
//

#include "CardHand.h"

CardHand::CardHand() {}

//CardHand::CardHand(Card *card) {
//}
void CardHand::addCard(const Card &card) {
    if (size() < MAX_SIZE) {
        hand.push_back(card);
    }
    else
        printf("Maxed Cards");
}

std::vector<Card> CardHand::getHand() const {
    return hand;
}

unsigned int CardHand::size() const {
    return hand.size();
}

std::ostream &operator<<(std::ostream &out, const CardHand &hand) {
    for (int i = 0; i < hand.size(); ++i) {
        out << i+1 << ":" << hand.hand[i] << std::endl;
    }
    return out;
}

Card CardHand::operator[](unsigned int index) const{
    return hand[index];
}


