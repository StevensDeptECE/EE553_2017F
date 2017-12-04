#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

class Account  {
private:
	double bal;
	mutex m;
public:
	Account() { bal = 0; }
	void deposit(double amt) {
		//		m.lock();
		// first read balance into register.  add amt. write back
		bal += amt;
		//		m.unlock();
	}
	bool withdraw(double amt) {
		//		m.lock();
		if (bal < amt) {
			//			m.unlock();
			return false;
		}
    bal -= amt;
		//		m.unlock();
		return true;
	}
	double balance() const {
		return bal;
	}
};

Account a; // $0

void deposits() {
	for (int i = 0; i < 100000000; i++)
		a.deposit(1);
}

void withdraws() {
	for (int i = 0; i < 50000000; i++)
		a.withdraw(1);
}

int main() {
	thread t1(deposits);
	t1.join();	
	thread t2(withdraws);
	t2.join();
	cout << a.balance() << '\n';
}
