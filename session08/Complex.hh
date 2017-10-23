#pragma once

#include <iostream>
#include <cmath>

class Complex {
private:
	double r, i; // instance variables (1 per object)
	static int count; // turns into extern int Complex::count; shared (1 for class)
public:
	Complex(double r = 0, double i = 0) : r(r), i(i) {
		count++;
	}
	~Complex() {
		count--;
	}
	Complex(const Complex& orig) {
		count++;
	}

	Complex& operator =(const Complex& orig) {

	}
#if 0
	//	operator +(a,b)
	friend Complex operator +(const Complex& a, const Complex& b) {
    return Complex(a.r + b.r, a.i + b.i);
	}
#endif
	//	a.operator+(b)
	Complex operator +(const Complex& b) const {
		//    return Complex((*this).r + b.r, (*this).i + b.i);
		//		return Complex(this->r + b.r, this->i + b.i);
		return Complex(r + b.r, i + b.i);
	}

	// this is to fix the symmetry problem for member operator
	friend Complex operator + (double v, const Complex& b){
	}

	friend Complex operator -(const Complex& c) {
		return Complex(-c.r, -c.i);
	}
#if 0
	Complex operator -() const {
		return Complex(-r, -i);
	}
#endif
  double abs() const {
		return std::sqrt(r*r + i*i);
	}
	friend std::ostream& operator <<(std::ostream& s, const Complex& c) {
		return s << '(' << c.r << ", " << c.i << ')';
	}
};




