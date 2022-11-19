//
// Created by Sherman Yan on 10/26/22.
//

#include "CDAccount.h"


CDAccount::CDAccount():CDAccount(10.00,10.00,0.1,5) {}

CDAccount::CDAccount(int bDollars, int bCents, double interestRate, int term)
: bDollars(bDollars), bCents(bCents), interestRate(interestRate), term(term) {
    assert(bDollars > 0 && bCents > 0 && bCents < 100 && interestRate > 0 && term >0);
}

double CDAccount::getBalance() const {
    return bDollars + (bCents * 0.01);
}

double CDAccount::getBalanceAtMaturity() const {
    return getBalance() * term;
}

int CDAccount::getTerm() const {
    return term;
}

double CDAccount::getInterestRate() const {
    return interestRate;
}
