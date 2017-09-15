#include <iostream>
#include <cstdint>
using namespace std;

inline int f(int x) { // f(x) = x*x
	return x*x;
}

int main() {
	uint64_t y = 0;
	for (uint64_t i = 0; i < 2000000000LL; i++) {
		 y += f(i); // 2*2
	}
	cout << y << '\n';
}
