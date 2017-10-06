#include <iostream>
using namespace std;

int f(int x) {
	int y = x*x;
	x = 19;
}

int g(int& x) {
	int y = x*x;
	x = 19;
}

void rect2polar(double x, double y, double & r, double & theta) {
	r = sqrt(x*x + y*y);
}

void rect2polar(double x, double y, double * r, double * theta) {
	*r = sqrt(x*x + y*y);
}

int main() {
	int a= 2;
	cout << f(a) << ' ' << a << '\n';
	cout << f(a) << '\n';
	cout << g(a) << '\n'; // a just changed

	const int b = 3;
	//	cout << g(b) << '\n'; 
	
  double x = 2, y = .5;
	double r,theta;
	rect2polar(x,y,r,theta);
  rect2polar(x,y, &r, &theta); 
}
