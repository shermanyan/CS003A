//
// Created by Sherman Yan on 10/26/22.
//

#ifndef CS003A_CDACCOUNT_H
#define CS003A_CDACCOUNT_H
#include <cassert>

class CDAccount {
private:
    int bDollars, bCents;
    double interestRate;
    int term;

public:
    CDAccount();
    CDAccount(int bDollars, int bCents, double interestRate, int term);

    double getInterestRate() const;
    double getBalance() const;
    double getBalanceAtMaturity() const;
    int getTerm() const;


};


#endif //CS003A_CDACCOUNT_H
