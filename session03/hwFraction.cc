int main() {
	Complex c1(1.0, 2.5); // real=1.0, imag = 2.5
	Complex c2(2.0, 1.5);
	const Complex c3 = c1.add(c2);  // add two complex numbers
	c3.print(); cout << "\n";
	cout << c3.getReal() << ", " << c3.getImag();
}
