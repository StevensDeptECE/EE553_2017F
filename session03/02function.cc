#include <iostream>
#include <cstdint>
using namespace std;

int f(int x) { // x is a COPY of a
	int y = 2*x;
	x = 19;
	return y;
}
int g(int& x) { // while in here, x IS a
	int y = 2*x;
	x = 19; // this changes a
	return y;
}

	


int main() {
	int a = 2;
	cout << f(a) << '\n';
	cout << f(a) << '\n';
	cout << g(a) << '\n';
	cout << g(a) << '\n';
}
