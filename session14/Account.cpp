//
// Created by dkruger on 12/8/2017.
//

#include "Account.h"

Account::Account() {
    balance = 0;
}

void Account::deposit(double amt) {
    balance += amt;
}

double Account::getBalance() const {
    return balance;
}