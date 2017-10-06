#include <iostream>
using namespace std;

int main() {
	int a = 4;
	int*p = &a;
	float b = 1.5f;
	double c = 3.2;
	const int d = 1;
	const double pi = 3.14159265358979;
	*p = 5; // change a
	float *q = &b;
	*q = 1.2f;
	const double*  death = &pi;
	//	*death = 4; // try to kill pi! // ok, this is an error...
	//ok, try harder...

	double* dd = (double*)&pi;
	*dd = 4;
	cout << pi << '\n';
}
