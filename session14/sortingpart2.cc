#include <iostream>
using namespace std;
class Elephant{
public:
	string name;
	int age;
public:
	Elephant(const string& name, int age) : name(name), age(age) {}
	friend ostream& operator<<(ostream& s, const Elephant& e) {
		return s << e.name << " " << e.age;
	}
};
template<typename T, typename Key>
void bubbleSort(T x[], Key T::*key, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1; j++)
			if (x[j].* key > x[j+1].* key)
				swap(x[j], x[j+1]);
	}
}

int main() {
	//	string a[] = { "application", "D", "cat", "boy", "apple"};
	Elephant a[] = { Elephant("Fred", 5), Elephant("Mary", 2) };
	bubbleSort(a, &Elephant::name, 2);
	for (auto x : a)
		cout  << x << ' ';
	cout << '\n';

	bubbleSort(a, &Elephant::age, 2);
	for (auto x : a)
		cout  << x << ' ';
	cout << '\n';

}
