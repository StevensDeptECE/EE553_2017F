#include <iostream>
#include <cstdint> //C++11
using namespace std;

int main() {
	cout << 2000 * 2000 << '\n';
	cout << 2000000 * 2000000 << '\n';
	cout << 2000000L * 2000000L << '\n';
	cout << 2000000LL * 2000000 << '\n'; // type promotion
	return 0;
}
