#include <iostream>
#include <string>
using namespace std;

template<typename T>
int find(T x[], T target, int n) {
	for (int i = 0; i < n; i++)
		if (x[i] == target)
			return i;
	return -1;
}

int main() {
	string s = "abc"; // string = const char*
	int x[] = { 1, 5, 2, 9, 6, 4, 5, 7};
	cout << find(x, 6, sizeof(x)/sizeof(x[0])) << '\n';

	string y[] = { "cat", "dog", "apple", "hello"};
	cout << find(y, string("apple"), sizeof(y) /sizeof(y[0])) << '\n';
}
	
