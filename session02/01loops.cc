#include <iostream>
using namespace std;

int main() {
	int x = 0;while(x<8){cout << x;x++;}

	for (int i = 0; i < 5; i++)
		cout << i << "hello";
	cout << '\n';
	for (int i = 0; i < 5; i++)
		cout << i << ' ';
	cout << '\n';
	for (int i = 5; i > -2; i--)
		cout << i;

	int sum = 0;
	for (int j = 2; j < 12; j += 2)
		sum += j; // sum = sum + j
	cout << sum < < '\n';


	for (int i = 1; i < 1024; i *= 2)
		cout << i;
	cout << '\n';
	for (int j = 2; j < 100; j *= 3)
		cout << j;
	cout << '\n';
	for (int j = 3; j < 100; j *= 3 + 1)
		cout << j;
	cout << '\n';	
	for (int j = 3; j < 100; j = j * 3 + 1)
		cout << j;
	cout << '\n';
	for (int k = 0; k < 10; k *= 2)
		cout << k;
	cout << '\n';
}
