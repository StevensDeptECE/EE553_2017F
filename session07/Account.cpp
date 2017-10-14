//
// Created by dkruger on 10/13/2017.
//

#include "Account.h"
using namespace std;
Account::Account(const string& firstName, const string& lastName, uint64_t id)
        : firstName(firstName), lastName(lastName), id(id),balance(25)  {
}

void Account::deposit(double amt) {
    balance += amt;
}

ostream& operator <<(ostream& s, const Account& a) {
    return s << a.firstName << "\t" << a.lastName << '\t' << a.id << '\t' << a.balance;
}
