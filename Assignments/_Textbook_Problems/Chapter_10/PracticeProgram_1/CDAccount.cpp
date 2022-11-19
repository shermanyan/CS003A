//
// Created by Sherman Yan on 10/26/22.
//

#include "CDAccount.h"

CDAccount::CDAccount() : CDAccount(3000,0.1,5){}

CDAccount::CDAccount(double balance, double interestRate, int term)
: balance(balance), interestRate(interestRate),term(term) {}

double CDAccount::getBalance() const {
    return balance;
}

double CDAccount::getInterestRate() const {
    return interestRate;
}

double CDAccount::getBalanceAtMaturity() const{
    return balance*interestRate*term;
}

int CDAccount::getTerm() const {
    return term;
}
