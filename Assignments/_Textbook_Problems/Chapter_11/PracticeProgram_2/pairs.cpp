//
// Created by Sherman Yan on 11/1/22.
//

#include "pairs.h"

pairs::pairs(): pairs(0,0) {}

pairs::pairs(int first, int second) :f(first) , s(second){}

std::istream& operator >>(std::istream& ins, pairs& second){
    char ch;
    ins >> ch >> second.f >> ch >> second.s >> ch;
    return ins;
}
std::ostream& operator <<(std::ostream& outs, const pairs& second){
    outs << '(' << second.f << ',' << second.s << ')';
    return outs;
}

pairs operator+(const pairs& first, const pairs& second){
    return {first.f + second.f , first.s + second.s};
}

pairs operator-(const pairs& first, const pairs& second) {
    return {first.f - second.f, first.s - second.s};
}

pairs operator*(const pairs& first, int multiplier){
    return {first.f * multiplier,first.s * multiplier};
}
