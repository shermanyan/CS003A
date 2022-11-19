//
// Created by Sherman Yan on 11/7/22.
//

#include "PokerScore.h"

PokerScore::PokerScore(){}

unsigned int PokerScore::size() const{
    return _scores.size();
}

Scores PokerScore::operator[](unsigned int index) const{
    return _scores[index];
}

void PokerScore::operator+=(const PokerScore &scores) {

    for (int i = 0; i < scores.size(); ++i) {
        _scores.push_back(scores[i]);
    }
}
void PokerScore::operator+=(const Scores &score) {
    _scores.push_back(score);
}


