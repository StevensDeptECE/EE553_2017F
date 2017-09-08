#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// 1. ALWAYS USE DOUBLE!!!! (never float)
int main() {
	double x = 6.023e+22;
	double y = 1.23456789012345e-300;
	double z = 1.23456789012345e+308;

	for (double i = 0; i < 10; i+= 0.1)
		cout << i << ' ';
	cout << '\n';

	for (float i = 0; i < 10; i+= 0.1)
		cout << i << ' ';
	cout << '\n';
	x = 0;
	for (int i = 0; i < 100; i++, x += 0.1)
		cout << x << ' ';
	cout << '\n';

	for (int i = 0; i < 100; i++)
		cout << i * 0.1 << ' ';
	cout << '\n';

	double sum = 0;
	for (double x = 0; x < 1000000; x += .1)
		sum += x;
	cout << setprecision(15);
	cout << sum << '\n';
}
