#include <iostream>
#include <string>
using namespace std;

template<typename T>
void swap2(T& a,T & b) {
	T temp = a;
	a = b;
	b = temp;
}


int main() {
	int a = 2, b = 3;
	cout << a << ' ' << b << '\n';
	swap2(a,b);
	cout << a << ' ' << b << '\n';
	string c = "abc", d = "def";
	swap2(c,d);
	cout << c << ' ' << d << '\n';
}
	
