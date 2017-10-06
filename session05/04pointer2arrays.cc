#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int a[] = {5, 4, 3, 2, 1};

	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
		cout << a[i] << ' '; // i[a]
	cout << '\n';
	int* p = & a[0]; // a --  a is a const pointer to the beginning
  for (int i = 5; i > 0; i--, p++) {
    cout << *p << ' ';
	}
	cout << '\n';
	char* q = (char*)&a[0];
	for (int i = sizeof(a); i > 0; i--, q++)
		cout << (int)(*q)<< ' ';
	cout << '\n';

	printf("%lf\n", 5);
	printf("%lf\n", 1000000);
	printf("%f\n",  1000000);
}
