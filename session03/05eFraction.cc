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
};

int main() {
	Fraction a;
	a.print(); cout << ' ';
	a.setNum(5);
	a.print(); cout << '\n';
	const int x = 5;
	//x++;
	const double pi = 3.14159265358979;  // M_PI in OLD math library
  const Fraction c(1,2); // 1/2
	c.print(); cout << '\n';
	//	c.setNum(19);
   	
}
