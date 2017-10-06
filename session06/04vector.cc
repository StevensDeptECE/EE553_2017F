#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> a;
	a.push_back(5);
	for (int i = 0; i < 10; i++)
		a.push_back(i);

	for (int i = 0; i < a.size(); ++i)
		cout << a[i] << '\n';

	vector<double> b;
	b.reserve(1000000); // if you know you want many elements, preallocate
	b.push_back(2.5);
	b.push_front(1.5); // this is slow!
	for (int i = 0; i < 5; i++)
		b.push_back(i+0.5);

	for (auto x : b) {
		cout << x << ' ';
	}

}
	

	
