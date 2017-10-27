#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> a;
	a.push_back(5);
	for (int i = 0; i < 10; i++)
		a.push_back(i);
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << ' ';
	cout << '\n';

	vector<string> b;
	b.push_back("abc");
	b.push_back("def");

	for (int i = 0; i < b.size(); i++)
		cout << b[i] << ' ';
	cout << '\n';

	for (auto x : b ) {
		cout << x << ' ';
	}
	cout << '\n';
}




	
	
	
