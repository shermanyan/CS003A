//
// Created by Sherman Yan on 11/7/22.
//

#ifndef CS003A_DECK_CPP
#define CS003A_DECK_CPP
#include "Deck.h"

Deck::Deck() {
    fillDeck();
    shuffle();
}

void Deck::fillDeck() {
    for (int i = 0; i < NUM_SUITS; i++)
        for (int j = 0; j < NUM_RANKS; j++) {
            deck[cardIndex++] = Card(suits(i), ranks(j));
        }
    cardIndex --;
}

void Deck::shuffle() {
    for (int i = 0; i < DECK_SIZE; ++i) {
        int idx = rand()  % DECK_SIZE;
        Card temp = deck[i];
        deck[i] = deck[idx];
        deck[idx] = temp;
    }
}

Card Deck::deal() {
    return deck[cardIndex--];
}

bool Deck::empty() {
    return cardIndex == DECK_SIZE;
}

std::ostream &operator<<(std::ostream &out, const Deck &deck) {
    for (int i = 0; i <= deck.cardIndex; i++) {
        out << i+1 << ":" << deck.deck[i] << std::endl;
    }
    return out;
}

Card& Deck::operator[](unsigned int index) {
    return deck[index];
}

#endif
