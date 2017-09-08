#include <iostream>
#include <string>
using namespace std;

int main() {
	string a = "abc";
	cout << a << '\n';
	cout << a[0] << '\n';
	cout << a[a.size()-1] << '\n';

	a += "def";
	a += a[3];
	cout << a << '\n';
}
