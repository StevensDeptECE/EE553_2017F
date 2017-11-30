#pragma once
#include <iostream>

template<typename Precision>
class Complex {
private:
	Precision r, i;
public:
	Complex(Precision r, Precision i) : r(r), i(i) {}
};
