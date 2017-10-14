#include <iostream>
#include "Account.h"
#include "Account.h"
using namespace std;

int main() {
    Account a ("Dov", "Kruger", 123456);
    a.deposit(1000000);
    cout << a << '\n';
    return 0;
}