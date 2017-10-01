/*
friend functions outside look like:
  operator+ (a,b)

  operator -(a)
*/

int main() {
	Complex c1(1.5,2.0);
	Complex c2(-1.3); // -1.3 + 0.0i
	Complex c5;  // 0+0i
	Complex c3 = c1 + c2;
	Complex c4 = -c1(); // unary operator has only one parameter
	cout << c1 << c3 << c4 << '\n';
}
