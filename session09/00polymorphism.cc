#include <iostream>

class Vehicle {
private:
	double speed;
	double weight;
	static int count;
public:
	double getSpeed() { return speed; }
	Vehicle(double speed, double weight) : speed(speed), weight(weight) { count++; }

};

int Vehicle::count = 0;


class Car : public Vehicle { // a Car IS_A Vehicle
private:
	std::string color;
public:
	Car(double speed, double weight, const std::string& color) : Vehicle(speed, weight), color(color) {}
	void payToll()  const{
		std::cout << 15;
	}
};

class Bus : public Vehicle {
private:
	int numPassengers;
public:
	Bus(double speed, double weight, int numPassengers) : Vehicle(speed, weight), numPassengers(numPassengers) {}
	void payToll() const {
		std::cout << 4;
	}
};

class Truck : public Vehicle {
private:
	int axle;
public:
	Truck(double speed, double weight, int axle) : Vehicle(speed, weight), axle(axle) {}
	void payToll() const {
		std::cout << 20 * axle;
	}
};

class A {};

using namespace std;
/*
	0   1    2   3   4   5   6   7
  8   9   10  11  12  13  14  15 
 16  17   18  19  20  21  22  23
 24  ...........................

 */
class Space {
private:
	char a;        // 1st byte // 3 bytes padding
	int b;         // bytes 4..7
	double c;      // bytes 8..15
	char d;        // 16
	unsigned int x : 2; // bit field  17
	int e;         // 20..23
	signed int y : 3; // -4 -3 -2 -1 0 1 2 3    byte: 24
};

/*
	0   1    2   3   4   5   6   7
  8   9   10  11  12  13  14  15 
 16  17   18  19  20  21  22  23
 24  ...........................

 */
class Space2 {
private:
	double c;      // bytes 0..7
	int b;         // bytes 8..11
	char a;        // 12
	char d;        // 13
	unsigned int x : 2; // bit field  14
	signed int y : 3; // -4 -3 -2 -1 0 1 2 3    byte: 14
	int e;           // 20..23
};

class Space3 {
private:
	double c;      // bytes 0..7
	int b;         // bytes 8..11
	char a;        // 12
	char d;        // 13
	unsigned int x : 2; // bit field  14
	signed int y : 3; // -4 -3 -2 -1 0 1 2 3    byte: 14
	int e:11;           // 20..23
};

class Person {
private:
	unsigned char age;
	unsigned int gender : 1;
	unsigned int a:1, b:1, c:1, d:1;
};



int main() {
	Vehicle v(55, 1000);
	Car c(90, 1200, "red");
	Bus b(42, 8000, 20);
	cout << sizeof(v) << '\n';
	cout << sizeof(string) << '\n';
	cout << sizeof(c) << '\n';
	cout << sizeof(b) << '\n';
	cout << sizeof(int) << '\n';
	cout << sizeof(A) << '\n';
	cout << sizeof(Space) << '\n';
	cout << sizeof(Space2) << '\n';
	cout << sizeof(Person) << '\n';
	short int x[10] = {1, 2, 3};
	cout << &x[0] << '\n';
	cout << &x[1] << '\n';
}


	
