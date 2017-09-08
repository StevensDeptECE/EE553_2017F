#include <iostream>
#include <string>
using namespace std;

//  print out the string n times   cout << msg will print
 void print(string msg, int n) {
	while (n > 0) {
		cout << msg;
		n--;
	}
}

#if 0
void print(string msg, int n) {
	for (int i = 0; i < n; i++)
		cout << msg;
}

void print(string msg, int n) {
	while (n-- > 0)
		cout << msg;
}
#endif

// return a string repeating msg n times
// with a space between each copy, example "hello", 3 --> "hello hello hello"
string repeat(string msg, int n) {

	return "your answer goes here";
}

// return a string that is the opposite order, example hello --> olleh
string reverse(string msg) {
	return "your answer goes here!";
}

// return the next character in ASCII, for example 'a' + 1 --> 'b'
char nextChar(char c) {

}

int factorial(int n) {
}	
	

int main() {
	int count = 3;
	print("hello", count);
	string big = repeat("yo", 9);
	cout << big << '\n';
	cout << nextChar('a') << '\n';
	cout << factorial(5) << '\n'; // 5*4*3*2*1 = 120
	//	cout << factorial2(21) << '\n'; // 5*4*3*2*1 = 120
	//	cout << factorial2(51) << '\n'; // 5*4*3*2*1 = 120
	//	cout << choose(52, 6) << '\n';  //52! / (6!(52-6)!)  52C0 = 1 52C1 = 52
}
