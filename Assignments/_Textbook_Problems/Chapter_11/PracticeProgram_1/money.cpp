//
// Created by Sherman Yan on 10/31/22.
//

#include "money.h"

int money::digitToInt(char c) {
    return ( static_cast<int>(c) - static_cast<int>('0'));
}

money::money(long dollars, int cents) {
    if (dollars * cents < 0) {
        std::cout << "Illegal values for dollars and cents.\n";
        exit(1);
    }

    allCents = dollars * 100 + cents;
}

money::money(long dollars) : allCents(dollars * 100){}

money::money() : allCents(0){}

double money::getValue() const {
    return allCents * 0.01;
}

money operator+(const money &amount1, const money &amount2) {
    money temp;
    temp.allCents = amount1.allCents + amount2.allCents;
    return temp;
}

money operator-(const money &amount1, const money &amount2) {
    money temp;
    temp.allCents = amount1.allCents - amount2.allCents;
    return temp;
}

money operator-(const money &amount) {
    money temp;
    temp.allCents = amount.allCents -1;
    return temp;
}

bool operator==(const money &amount1, const money &amount2) {
    return (amount1.allCents == amount2.allCents);
}

std::istream &operator>>(std::istream &ins, money &amount) {

    char oneChar, decimalPoint, digit1, digit2;
    long dollars;
    int cents;
    bool negative;
    ins >> oneChar;
    if (oneChar == '-') {
        negative = true;
        ins >> oneChar;
    } else
        negative = false;

    ins >> dollars >> decimalPoint >> digit1 >> digit2;

    if (oneChar != '$' || decimalPoint != '.' || !isdigit(digit1) || !isdigit(digit2)){
        std::cout << "Error illegal form for money input\n";
        exit(1);
    }

    cents = digittoint(digit1)*10 + digittoint(digit2);
    amount.allCents = dollars * 100 + cents;
    if(negative)
        amount.allCents *= -1;

    return ins;
}

std::ostream &operator<<(std::ostream &outs, const money &amount) {
    long positiveCents, dollars,cents;
    positiveCents = labs(amount.allCents);
    dollars = positiveCents/100;
    cents = positiveCents%100;
    if(amount.allCents < 0)
        outs << "-";
    outs << "$" << dollars << '.';
    if(cents < 10)
        outs << '0';
    outs << cents << std::endl;

    return outs;
}

bool operator <(const money& lhs, const money& rhs){
    return lhs.allCents < rhs.allCents;
}

bool operator <=(const money& lhs, const money& rhs){
    return lhs.allCents <= rhs.allCents;
}

bool operator >=(const money& lhs, const money& rhs) {
    return lhs.allCents >= rhs.allCents;
}

money money::percent(int percentFigure) const {

    money temp;
    temp.allCents = allCents * (percentFigure * 0.01);
    return temp;
}

