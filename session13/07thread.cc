#include <thread>
#include <iostream>
#include <unistd.h>
using namespace std;

void f() {
	for (int i = 0; ; i++) {
		cout << " Hello " << i << flush;
		sleep(1);
	}
}

void g() {
  while (true) {
		cout << "Goodbye " << flush;
		sleep(2);
	}
}

int main() {
	thread t1(f);
	thread t2(g);
	t1.join();
	t2.join();
}
