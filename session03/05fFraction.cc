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
	int getNum() const { // read only methods have const AFTER the method name
		return numerator;
	}
	int getDen() const { return denominator; }
	void setNum(int n) { numerator = n; }
	void setDen(int d) { denominator = d; }
	void print() const {
		cout << numerator << "/" << denominator;
	}
	friend Fraction add(Fraction x, Fraction y);
	Fraction add(Fraction y) {
    Fraction ans;
		ans.numerator = numerator * y.denominator + y.numerator*denominator;
		ans.denominator = denominator * y.denominator;
		return ans;
	}
};
/*
	1/2 + 1/3  =     1*3 + 1*2
                   _______
	                   2*3
 */
Fraction add(Fraction x, Fraction y) {
  Fraction ans;
	ans.numerator = x.numerator*y.denominator + x.denominator*y.numerator;
	ans.denominator = x.denominator * y.denominator;
	return ans;
}

int main() {
	Fraction a(1,2);
	Fraction b(1,3);
	a.print(); cout << ' '; b.print(); cout << '\n';
	Fraction c = add(a, b);
	Fraction d = a.add(b);
	c.print(); cout << ' '; d.print(); cout << '\n';
	//	Fraction e = a + b; // formats c:
	
}
