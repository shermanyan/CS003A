//
// Created by Sherman Yan on 11/7/22.
//

#ifndef CS003A_DECK_H
#define CS003A_DECK_H

#include "Card.h"

class Deck {
private:
    Card deck[52];// this is your final deck of cards

    const int DECK_SIZE = 52;// this is the size of your deck
    const int NUM_SUITS = 4;
    const int NUM_RANKS = 13;

    bool empty(); //returns true if deck has no cards
    int cardIndex = 0; //marks the index of the next card in the deck

    void fillDeck();
    void shuffle(); // puts cards in random order

public:

    Deck(); // this is the constructor
    Card deal(); // returns the next card in the deck

    Card& operator[](unsigned int index);
    friend std::ostream& operator<<(std::ostream& out, const Deck& deck); // prints all the cards to the console

};

//#include "Deck.cpp"

#endif //CS003A_DECK_H
