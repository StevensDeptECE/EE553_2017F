#include <iostream>
using namespace std;

class Fraction {
private:
public:
  int numerator; // top
	int denominator; // bottom

};

int main() {
	Fraction a;
	Fraction b[100];
	cout << a.numerator << "/" << a.denominator << '\n';
	for (int i = 0; i < 100; i++)
		cout << b[i].numerator << "/" << b[i].denominator << '\n';
}
