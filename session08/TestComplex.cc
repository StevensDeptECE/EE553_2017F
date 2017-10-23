#include "Complex.hh"
using namespace std;

void f(); // function prototype

int main() {
	f();
	const Complex c1(1.0, 2.5);
	const Complex c2(1.5); // i = 0
	const Complex c3 = c1 + c2;
	const Complex c4 = c1 + 2.0;
	const Complex c5 = 2.0 + c1;
	cout << c3.abs();
	cout << c3 << '\n';
	const Complex c6 = -c5;
}
	
