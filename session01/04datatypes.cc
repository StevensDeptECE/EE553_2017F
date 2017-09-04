#include <iostream>
#include <cstdint> //C++11
using namespace std;

int main() {
	int a = 1;
	int b = 123456789; // ok or not?
	int c = -123456789; // ok or not?

	short int x;
	int y;  // sizeof(int) >= 16
	long int z;
	long long int w; //64 bits?   sizeof(x) <= sizeof(y) <= sizeof(z)

	int32_t aa = 1; // definitely 32 bits
	int64_t bb = 1241241241252151251; // definitely 64 bits
  uint32_t cc = -1;
	uint64_t dd = 0;

	const int Z = 99;
	Z = 48;
	return 0;
}
