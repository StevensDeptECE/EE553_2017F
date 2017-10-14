/*
   Created by dkruger on 10/13/2017.
*/
#pragma once
#include <iostream>
#include <string>

class Account {
private:
    std::string firstName;
    std::string lastName;
    uint64_t id;
    double balance;
public:
    // this function CANNOT BE INLINE
    Account(const std::string& firstName, const std::string& lastName, uint64_t id);
    void deposit(double amt);
    friend std::ostream& operator <<(std::ostream& s, const Account& a);
};
