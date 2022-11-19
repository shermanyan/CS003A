//
// Created by Sherman Yan on 11/7/22.
//

#ifndef CS003A_POKERSCORE_H
#define CS003A_POKERSCORE_H

#include "../enums/scores.h"
#include <vector>

class PokerScore {

private:
    std::vector<Scores> _scores;

public:
    PokerScore();
    unsigned int size() const;

    void operator+=(const Scores& score);
    void operator+=(const PokerScore& scores);
    Scores operator[](unsigned int index) const;

};


#endif //CS003A_POKERSCORE_H
