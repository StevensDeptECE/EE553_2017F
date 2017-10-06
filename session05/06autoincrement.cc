#include <iostream>
using namespace std;

int main() {
	int a = 1;
	cout << a++ << '\n'; // postincrement first print a, then increment
	// a = 2
	cout << ++a << '\n'; // preincrement first increment, then print a
	// a = 3

	int b = ++a + ++a; // implementation defined  could be 10 or 9
	// DON'T DO THIS!!!

	int c[] = {5, 4, 3, 2, 1};
	int *p = c; // p points to c[0]
	cout << ++*p << "\n";// c[0] = 6
	cout << *++p << "\n"; // print c[1] which is 4 DOES NOT CHANGE
	cout << *p++ << "\n"; // print c[1] which is 4 p now points to c[2]
	cout << (*p)++ << "\n"; // print c[2] which is 3 , THEN c[2] = 4
	


}
