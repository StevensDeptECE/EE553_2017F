#include <iostream>
using namespace std;

void g(); // function prototype.  function g() exists somewhere....

void f() {
  int x = 2;
	cout << x;
	g();
	static int y = 3; // this variable is scoped INSIDE f but lifetime is GLOBAL
	cout << y; // first time, this is 3, next time this is 4!!!!
	y++;
}

const double pi = 3.14159265358979; // internal name is pi_d
int x = 4; // global (visible to EVERYONE in the program)
// globals are initialized when task is loaded, usually the value is in the executable
const int y = 0; // initialized to ZERO (but now C++ defaults to strict)
int main() {
	int x = 3; // auto variables are not initialized unless explicitly done
	int y; // y is random junk because it is auto (on the stack)
	cout << x;
	f();
	if (x < 5) {
    int x = 6;
		cout << x; // scope is local to the block 
	}
	cout << x;
	cout << ::x; // print the global x
  f(); // the variable x inside f is reborn (2 again)
	
}
