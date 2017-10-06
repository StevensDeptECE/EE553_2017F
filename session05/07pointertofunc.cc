#include <iostream>
#include <cmath>
using namespace std;
// sin, cos, tan, sqrt ...
double f(double x) { return x*x; }
double g(double x) { return 2*x*x*x; }

typedef double (*FuncOneVar)(double);

double integrate(FuncOneVar f, double a, double b, int n) {
	double h = (b-a) / n;
	double x = a;
	double sum = 0;
	for ( ; n > 0; x += h, n--){
		sum += f(x);
	}
  return sum*h;	
}

int main() {
	cout << integrate(sin, 0, 2*M_PI, 16) << '\n';
	cout << integrate(sin, 0, 2*M_PI, 1024) << '\n';
	cout << integrate(sin, 0, 2*M_PI, 1024*1024) << '\n';
}
