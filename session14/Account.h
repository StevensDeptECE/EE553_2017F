#pragma once

class Account {
private:
    double  balance;
public:
    Account();
    double getBalance() const;
    void deposit(double  amt);
};


