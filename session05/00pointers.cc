#include <iostream>
using namespace std;

int main() {
	int a = 3; // regular int what location???
	int b = 4;
	cout << &a << '\n';  // 
	cout << &b << '\n';
	int * p = &a; // point p to where a lives
	int *q; // q is a pointer to int
	q = &a;
  *p = 5; // a = 5
	cout << *q << '\n';
	q = &b;
	cout << *q << '\n';
	//	q = (int*)10; // "trust me, this is an int*"
	//	cout << *q << '\n';//.... and DIE becayse you deserve it	
}
