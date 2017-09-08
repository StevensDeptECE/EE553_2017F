#include <iostream>
#include <cmath>
using namespace std;

void f() {
  cout << "hello";
}

int add(int a, int b) {
	return a + b;
}

double hypot(double a, double b) {
	return sqrt(a*a + b*b);
}

int main() {
	f;
	5;
	3+4;
	f(); // execute the function
	int z = add(3,2) << '\n';
	cout << z;
	cout << hypot(3,4) << '\n';
}



