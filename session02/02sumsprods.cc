#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	for (int i = 0; i < 100; i++)
		sum += 1/i;
	cout<< sum << '\n';
}
