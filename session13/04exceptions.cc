#include <iostream>
using namespace std;

void f() {
	int x = 1;
	cin >> x;
	if (x == 0)
		throw "Divide by zero";
	int y = 1 / x;
}

int main() {
 backhere:
  try {
    f();

	} catch (const char* msg) {
		cout << msg << "\n";
	} catch (int x) {
		goto backhere;
	}

}
