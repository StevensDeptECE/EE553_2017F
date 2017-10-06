#include <iostream>
using namespace std;

int main() {
	int a = 5;
	double* p = (double*)&a;
	cout << *p << "\n";
}
