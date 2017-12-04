#include <iostream>
using namespace std;

class DivByZero {
private:
	const char* filename;
	int linenum;
public:
	DivByZero(const char* filename, int linenum): filename(filename), linenum(linenum) {
	}
	friend ostream& operator<<(ostream& s, const DivByZero& d) {
		return s << "Divide by Zero: " << d.filename << ": " << d.linenum << '\n';
	}
	
};

class Fraction {
private:
	int num, den;
public:
	Fraction(int n, int d) : num(n), den(d) {
		if (d == 0)
			throw DivByZero(__FILE__, __LINE__);
	}
	
};


int main() {
	try {
		Fraction a(1,2);
		Fraction b(1,0);
	} catch (const DivByZero& d) {
    cout << d;
	}
}
