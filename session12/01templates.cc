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
	cout << "\n";

	double y2 = f(2.5);
	cout << "\n";
	
	float y3 = f(2.2f);
	cout << "\n";
	
	//	cout << y << " " << y2 << '\n';
}
