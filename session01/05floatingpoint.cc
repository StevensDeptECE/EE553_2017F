#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float f = 1.234567f;
	double d = 1.23456789012345;
	long double e = 1.23456789012345678901234567890L;
	cout << setprecision(30);
	
	cout << f << '\n';
	cout << d << '\n';
	cout << e << '\n';
}
