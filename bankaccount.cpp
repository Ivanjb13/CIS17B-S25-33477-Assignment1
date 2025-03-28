#include "bankaccount.h"
#include <iostream>


BankAccount::BankAccount(std::string n, double a){
    accountHolderName = n;
    balance = a;
}

double BankAccount::getBalance() {
    return balance;
}

void BankAccount::deposit(double a) {
    balance+=a;
}

void BankAccount::withdraw(double a) {
    balance-=a;
}
