#include <iostream>
#include "Account.h"

using namespace std;

int main() {
    Account a; // start with no money
    a.deposit(100);
    cout << a.getBalance();

    return 0;
}