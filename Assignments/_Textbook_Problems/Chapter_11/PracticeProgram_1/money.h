//
// Created by Sherman Yan on 10/31/22.
//

#ifndef CS003A_MONEY_H
#define CS003A_MONEY_H

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype>

class money {
private:
    long allCents;
    int digitToInt(char c);
public:
    money(long dollars, int cents);
    money(long dollars);
    money();

    friend money operator +(const money& amount1, const money& amount2);
    friend money operator -(const money& amount1, const money& amount2);
    friend money operator -(const money& amount);

    friend bool operator ==(const money& amount1, const money& amount2);
    friend bool operator <(const money& lhs, const money& rhs);
    friend bool operator <=(const money& lhs, const money& rhs);
    friend bool operator >=(const money& lhs, const money& rhs);

    double getValue( ) const;
    friend std::istream& operator >>(std::istream& ins, money& amount);
    friend std::ostream& operator <<(std::ostream& outs, const money& amount);

    money percent(int percentFigure) const;
};


#endif //CS003A_MONEY_H
