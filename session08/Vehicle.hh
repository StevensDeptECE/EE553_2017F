#include <iostream>
//parent class, super class (object-oriented terminology)

//base class in C++ and Java

class Vehicle {
private:
	int speed;
public:
	Vehicle(int speed) : speed(speed) {}
	void setSpeed(int s) { speed = s; }
	friend std::ostream& operator <<(std::ostream& s, const Vehicle& v) {
		return s << v.speed;
	}
};

// A truck carries cargo (weight) speed
class Truck : public Vehicle { // A truck IS_A Vehicle
private:
	double weight;
  void setSpeed(int s) {}
	friend std::ostream& operator <<(std::ostream& s, const Truck& t) {
		s << " I am a truck and my speed = " << (const Vehicle&)t;
	}
};
#if 0
class Dov : public BillGates, public WarrenBuffet {
};
#endif

// A bus carries passengers (# people) speed
class Bus : public Vehicle {
private:
	int speed;
	int numPassengers;

	
};

// A car has a color speed
class Car : public Vehicle {
private:
	std::string color;
public:
	Car(const std::string& color, int s) : Vehicle(s), color(color) {}
	friend std::ostream& operator <<(std::ostream& s, const Car& c) {
    return s << " I am a car and my speed = " << (const Vehicle&)c << c.color;
	}
	
};
