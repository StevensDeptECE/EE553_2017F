#include <iostream>
#include <string>
using namespace std;

//  print out the string n times   cout << msg will print
void print(string msg, int n) {


}

string repeat(string msg, int n) {
  string big = msg;
 	big += msg; // msg twice
}

char nextChar(char c) {

}

int factorial(int n) {
}	
	

int main() {
	print("hello", 3);
	string big = repeat("yo", 9);
	cout << big << '\n';
	cout << nextChar('a') << '\n';
	cout << factorial(5) << '\n'; // 5*4*3*2*1 = 120
	//	cout << factorial2(21) << '\n'; // 5*4*3*2*1 = 120
	//	cout << factorial2(51) << '\n'; // 5*4*3*2*1 = 120
	//	cout << choose(52, 6) << '\n';  //52! / (6!(52-6)!)  52C0 = 1 52C1 = 52
}
