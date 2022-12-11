//
// Created by Sherman Yan on 11/14/22.
//

#include "PokerHands.h"

const PokerHands PokerHands::RoyalFlush({
    {HEARTS, ACE},
    {HEARTS, TEN},
    {HEARTS, JACK},
    {HEARTS, QUEEN},
    {HEARTS, KING}
});
const PokerHands PokerHands::StraightFlush({
    {SPADES, FOUR},
    {SPADES, FIVE},
    {SPADES, SIX},
    {SPADES, SEVEN},
    {SPADES, EIGHT}
});
const PokerHands PokerHands::FourOfAKind({
    {HEARTS, EIGHT},
    {SPADES, EIGHT},
    {CLUBS, EIGHT},
    {DIAMONDS, EIGHT},
    {SPADES, KING}
});
const PokerHands PokerHands::FullHouse({
    {SPADES, ACE},
    {HEARTS, ACE},
    {SPADES, ACE},
    {CLUBS, TEN},
    {DIAMONDS, TEN}
});
const PokerHands PokerHands::Flush({
    {DIAMONDS, ACE},
    {DIAMONDS, THREE},
    {DIAMONDS, FIVE },
    {DIAMONDS, KING},
    {DIAMONDS, QUEEN}
});
const PokerHands PokerHands::Straight({
    {SPADES, ACE},
    {HEARTS, TWO},
    {DIAMONDS, THREE},
    {SPADES, FOUR},
    {CLUBS, FIVE}
});
const PokerHands PokerHands::ThreeOfAKind({
    {SPADES, QUEEN},
    {HEARTS, ACE},
    {CLUBS, KING},
    {HEARTS, KING},
    {DIAMONDS, KING}
});
const PokerHands PokerHands::TwoPair({
    {SPADES, ACE},
    {DIAMONDS, NINE},
    {CLUBS, NINE},
    {DIAMONDS, TEN},
    {SPADES, TEN}
});
const PokerHands PokerHands::OnePair({
    {SPADES, ACE},
    {DIAMONDS, TWO},
    {CLUBS, TWO},
    {DIAMONDS, KING},
    {SPADES, QUEEN}
});
const PokerHands PokerHands::HighCard({
    {SPADES, ACE},
    {DIAMONDS, FOUR},
    {CLUBS, SIX},
    {HEARTS, EIGHT},
    {CLUBS, KING}
});

PokerHands PokerHands::getHand(Scores score) {
    switch (score) {
        case 0:
            return RoyalFlush;
        case 1:
            return StraightFlush;
        case 2:
            return FourOfAKind;
        case 3:
            return FullHouse;
        case 4:
            return Flush;
        case 5:
            return Straight;
        case 6:
            return ThreeOfAKind;
        case 7:
            return TwoPair;
        case 8:
            return OnePair;
        case 9:
            return HighCard;
    }
}
