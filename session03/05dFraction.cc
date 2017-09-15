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
};

int main() {
	Fraction a;
	cout << a.getNum() << "/" << a.getDen() << '\n';
	a.setNum(5);
	cout << a.getNum() << "/" << a.getDen() << '\n';
	const int x = 5;
	//x++;
	const double pi = 3.14159265358979;  // M_PI in OLD math library
  const Fraction c(1,2); // 1/2
	cout << c.getNum() << "/" << c.getDen() << '\n';
	//	c.setNum(19);
   	
}
