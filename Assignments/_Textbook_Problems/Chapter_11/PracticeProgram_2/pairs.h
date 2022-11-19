//
// Created by Sherman Yan on 11/1/22.
//

#ifndef CS003A_PAIRS_H
#define CS003A_PAIRS_H
#include <iostream>

class pairs{
private:
    int f;
    int s;

public:
    pairs();
    pairs(int first, int second);
    friend std::istream& operator >>(std::istream& ins, pairs& second);
    friend std::ostream& operator <<(std::ostream& outs, const pairs& second);

    friend pairs operator+(const pairs& first, const pairs& second);
    friend pairs operator-(const pairs& first, const pairs& second);
    friend pairs operator*(const pairs& first, int multiplier);


};


#endif //CS003A_PAIRS_H
