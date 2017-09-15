#include <iostream>
using namespace std;

class Fraction {
private:
  int numerator;
	int denominator;
public:
	Fraction() { numerator = 0; denominator = 1; }
	Fraction(int n, int d) {
		numerator = n;
		denominator = d;
	}
	// method (object-oriented terminology)
	// member function (C++)
	int getNum() { return numerator; }
	int getDen() { return denominator; }
};

int main() {
	Fraction a; // 0
	// a.getNum() sending object a a message
	cout << a.getNum() << "/" << a.getDen() << '\n';
	Fraction c(1,2); // 1/2
	cout << c.getNum() << "/" << c.getDen() << '\n';
 	
}
