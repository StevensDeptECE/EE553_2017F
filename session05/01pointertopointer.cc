#include <iostream>
using namespace std;

int main() {
	int a = 4;
	int*p = &a;
	*p = 5;
	cout << a << '\n';
	cout << &a << '\n';
	cout << &p << '\n'; //  address of p is a pointer to pointer  to int
	int**q = &p;
	**q = 6;
	cout << a << '\n';
	//	cout << ++*q++; // read that, sucker.
}
