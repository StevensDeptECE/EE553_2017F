#include "LinkedList.hh"
#include <string>
using namespace std;
#include "LinkedList.cc"

int main() {
	LinkedList<int> a; // empty
	a.addFirst(3); 
  a.addFirst(1);
	a.addFirst(4); // 4 1 3
	a.addLast(1); // 4 1 3 1
	a.removeFirst(); // 1 3 1
	cout << a << '\n';
	LinkedList<string> b;
	b.addFirst("hello");
	b.addLast("goodbye");
	cout << b << '\n';
}
