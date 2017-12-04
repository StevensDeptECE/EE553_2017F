#include <iostream>
#include "04Complex.hh"
using namespace std;

int main() {
	float x = 1;
	double y = 1.0000000000;
	long double z = 1.000000000000000000009999999;
	Complex<double> a(1.0,2.5);
	Complex<float> b(1.0f, 2.5f);
	Complex<long double> c(1,2);
	cout << sizeof(a) << " " << sizeof(b) << " " << sizeof(c) << '\n';

	cout << sizeof(long double) << '\n';
}
