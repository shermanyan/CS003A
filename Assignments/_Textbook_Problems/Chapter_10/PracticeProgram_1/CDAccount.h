//
// Created by Sherman Yan on 10/26/22.
//

#ifndef CS003A_CDACCOUNT_H
#define CS003A_CDACCOUNT_H


class CDAccount {
private:
    double balance, interestRate;
    int term;
public:
    CDAccount();
    CDAccount(double balance, double interestRate, int term);

    CDAccount();

    double getBalance() const;
    double getBalanceAtMaturity() const;
    double getInterestRate() const;
    int getTerm() const;
};


#endif //CS003A_CDACCOUNT_H
