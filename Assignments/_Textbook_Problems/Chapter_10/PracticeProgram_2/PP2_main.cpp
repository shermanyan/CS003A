//
// Created by Sherman Yan on 10/26/22.
//
#include <iostream>
#include "CDAccount.h"

int main(){
    CDAccount account;

    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);

    std::cout << "Initial Balance: " << account.getBalance() << std::endl;
    std::cout << "Interest Rate: " << account.getInterestRate() << std::endl;
    std::cout << "Balance at maturity: " << account.getBalanceAtMaturity() << std::endl;
    std::cout << "Term: " << account.getTerm() << std::endl;

    return 0;
}