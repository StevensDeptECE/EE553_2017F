#include <iostream>
using namespace std;

int f(int x) {
	cout << "int version";
	return 2*x;
}

double f(double x) {
	cout << "double version";
	return 2*x;
}


int main() {
	int y = f(2);
	cout << y << "\n";

	double y2 = f(2.5);
	cout << y2 << "\n";
	
	float y3 = f(2.2f);
	cout << y3 << "\n";
	
	//	cout << y << " " << y2 << '\n';
}
