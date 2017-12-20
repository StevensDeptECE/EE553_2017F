#include <iostream>
#include <omp.h>
using namespace std;

int main() {
	cout << "Number of threads: " << omp_get_num_threads() << '\n';
	
#pragma omp for
	for(int n = 0; n < 10; ++n) {
		cout << n;
	}
 cout << '\n';
}
