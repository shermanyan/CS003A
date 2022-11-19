//
// Created by Sherman Yan on 10/26/22.
//
#include <iostream>
#include "CDAccount.h"
int main(){
    CDAccount account;


    std::cout << "Initial Balance: " << account.getBalance() << std::endl;
    std::cout << "Interest Rate: " << account.getInterestRate() << std::endl;
    std::cout << "Balance at maturity: " << account.getBalanceAtMaturity() << std::endl;
    std::cout << "Term: " << account.getTerm() << std::endl;

    return 0;
}
