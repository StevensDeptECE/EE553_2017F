#include <iostream>
using namespace std;

// 6 5 4 3 2 1
// 5 4 3 2 1 6

void bubbleSort(int x[], int n) {
	for (int j = 0; j < n-1; j++)
		for (int i = 0; i < n-1; i++)
			if (x[i] > x[i+1])
				swap(x[i], x[i+1]);
}

int main() {
	int x[] = {1, 2, 3, 4, 5};
	sort(x, 5);
	print(x, 5); // prints same thing

	int y[] = {6, 5, 4, 3, 2, 1};
	bubbleSort(y, 6);
	print(y, 7); // 1 2 3 4 5 6

	#if 0
	string[] s = {"hello", "goodbye", "cad", "dog", "cat", "catastrophe" };
	bubbleSort(y, 6);
	print(y, 7); // 1 2 3 4 5 6

	class Elephant {
	private:
		string name;
		int age;
	public:
		Elephant(const string name, int age) : name(name), age(age) {}

	};


	
	#endif
  Elephant e[] = { Elephant("Fred", 20), Elephant("Alice", 22), Elephant("George", 9)};
	bubbleSort(e, 3);

	


	
