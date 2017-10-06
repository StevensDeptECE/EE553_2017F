#include <iostream>
using namespace std;

int main() {
	int a = 5;
	cout << a + 2;
	int* p;
	//cout << *p; // probably segmentation fault
	p = &a; // p points to a
	cout << p << '\n';
	cout << &p << '\n';
	int** q; // q is a pointer to pointer to int
	//	q = &a; // wrong type!!!
	q = &p;
	cout << **q << '\n';
	
}
