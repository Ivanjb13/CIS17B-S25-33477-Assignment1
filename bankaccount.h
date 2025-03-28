#ifndef BANKACCOUNT_H 
#define BANKACCOUNT_H
#include <iostream>



class BankAccount {
private:
    std::string accountHolderName;
    int accountNumber;
    double balance;
public:
    BankAccount(std::string, double);
    double getBalance();
    void deposit(double);
    void withdraw(double);
};

#endif
