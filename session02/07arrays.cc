#include <iostream>
using namespace std;

int main() {
	int a = 5;
	//	string s = "abc";  // s[0] = 'a' s[1] = 'b' s[2] = 'c'

	int x[5]; // x[0] ... x[1] ... x[4]

	int y[5] = { 5, 1, -9, -3, 16}; // initialized
	int z[] = {5, 4, 3};
	int w[10] = {5, 4, 3};// ... 0,0,0,0,0,0,0
	const int SIZE = 10;
	int b[SIZE] = {0};
	for (int i = 0; i < SIZE; i++)
		b[i] = i;

	for (int i = 0; i < sizeof(b)/sizeof(int); i++)
		b[i] = SIZE - i;

	double m[4][4] = {
		{1,0,0,0},
		{0,1,0,0},
		{0,0,1,0},
		{0,0,0,1}
	};
	for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
			m[i][j] *= 2;
		}
	}


	cout << "Please enter matrix size: ";
	int n;
	cin >> n;
	double m2[n]; //double* m2 = new double[n]
	for (int i = 0; i < n; i++)
		m2[i] = 0;
	
	double m3[n][n]; //double* m2 = new double[n]
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << m3[i][j] << ' ';
		cout << '\n';
	}
			
}




