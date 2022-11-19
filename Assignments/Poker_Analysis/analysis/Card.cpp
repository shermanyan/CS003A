//
// Created by Sherman Yan on 11/7/22.
//

#ifndef CS003A_POKER_CARD_CPP
#define CS003A_POKER_CARD_CPP

#include "Card.h"

Card::Card(): Card(DIAMONDS,JACK){}

Card::Card(suits suit, ranks rank) :_suit(suit), _rank(rank){}

suits Card::getSuit() const{
    return _suit;
}

ranks Card::getRank() const{
    return _rank;
}

std::string Card::rankToString() const{
    switch (_rank) {
        case ACE:    return "Ace";
        case TWO:    return "Two";
        case THREE:  return "Three";
        case FOUR:   return "Four";
        case FIVE:   return "Five";
        case SIX:    return "Six";
        case SEVEN:  return "Seven";
        case EIGHT:  return "Eight";
        case NINE:   return "Nine";
        case TEN:    return "Ten";
        case JACK:   return "Jack";
        case QUEEN:  return "Queen";
        case KING:   return "King";
        default:     break;
    }
}

std::string Card::suitToString() const{
    switch (_suit) {
        case HEARTS:    return "Heart";
        case DIAMONDS:  return "Diamond";
        case SPADES:    return "Spade";
        case CLUBS:     return "Club";
        default:        break;
    }
}

void Card::setSuit(suits suit) {
    _suit = suit;
}

void Card::setRank(ranks rank) {
    _rank = rank;
}

std::ostream &operator<<(std::ostream &out, const Card& card) {

    out << " " << card.rankToString()  << " of " <<  card.suitToString();

    return out;
}

bool operator <(const Card& lhs, const Card& rhs){
    return (lhs._rank < rhs._rank);
}
bool operator <=(const Card& lhs, const Card& rhs){
    return (lhs._rank <= rhs._rank);
}
bool operator >(const Card& lhs, const Card& rhs){
    return (lhs._rank > rhs._rank);
}
bool operator >=(const Card& lhs, const Card& rhs){
    return (lhs._rank >= rhs._rank);
}
bool operator ==(const Card& lhs, const Card& rhs){
    return (lhs._rank == rhs._rank);
}



#endif