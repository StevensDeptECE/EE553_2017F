#include <iostream>
#include <cmath>

using namespace std;
/*
	(x,y)   ==>   (r, theta)   r = sqrt(x*x + y*y)  theta = arctan(y/x)

	(r, theta) ==> (x,y)


*/

void rect2polar(double x, double y, double& r, double& theta) {
  r = sqrt(x*x + y*y);
	theta = atan2(y, x);
}

int main() {
	double x, y, r, theta;
	cout << "Enter x y: ";
	cin >> x >> y;
	rect2polar(x, y, r, theta);
	cout << r << "\t" << theta << '\n';
}





	
