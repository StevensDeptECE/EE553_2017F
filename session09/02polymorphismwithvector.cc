#include <iostream>
#include <vector>

class Vehicle {
private:
	double speed;
	double weight;
	static int count;
public:
	double getSpeed() { return speed; }
	Vehicle(double speed, double weight) : speed(speed), weight(weight) { count++; }
	virtual void payToll() const = 0;
	virtual ~Vehicle() {}
};

int Vehicle::count = 0;


class Car : public Vehicle { // a Car IS_A Vehicle
private:
	std::string color;
	int* p;
public:
	Car(double speed, double weight, const std::string& color) : Vehicle(speed, weight), color(color) { p = new int[30]; }
	~Car() { std::cout << "destructor for Car\n";
		delete []p;
	}
	void payToll()  const{
		std::cout << "Car pays: " << 15 << '\n';
	}
};

class Bus : public Vehicle {
private:
	int numPassengers;
public:
	Bus(double speed, double weight, int numPassengers) : Vehicle(speed, weight), numPassengers(numPassengers) {}
	~Bus(){ std::cout << "destructor for bus.  nothing to do\n"; }
	void payToll() const {
		std::cout << "Bus pays: " << 4 << '\n';
	}
};

class Truck : public Vehicle {
private:
	int axle;
public:
	Truck(double speed, double weight, int axle) : Vehicle(speed, weight), axle(axle) {}
	void payToll() const {
		std::cout << "Truck pays: " << 20 * axle << '\n';
	}
};

class TrafficSim {
private:
	std::vector<Vehicle*> vehicles;
public:
	TrafficSim() {
	}
	~TrafficSim() {
		for (int i = 0; i < vehicles.size(); i++)
			delete vehicles[i];
	}
	TrafficSim(const TrafficSim& orig) = delete;
	TrafficSim& operator =(const TrafficSim& orig) = delete;
	
	void addCar() {
		vehicles.push_back(new Car(55, 1200, "red"));
	}
	void addBus() {
		vehicles.push_back(new Bus(55, 1200, 22));
	}
	void payToll() {
		for (int i = 0; i < n; i++)
			vehicles[i]->payToll();//			(*vehicles[i]).payToll();
	}

};


using namespace std;
int main() {
	//	Vehicle v(55, 1000);
	Car c(90, 1200, "red");
	Bus b(42, 8000, 20);
	Truck t(55, 20000, 4);
	t.payToll();
	c.payToll();
	b.payToll();
	//	v.payToll();

	Vehicle* p;
	p = &t;
	p->payToll();
	p = &c;
	p->payToll();
	cout << "SIZE OF CAR: " << sizeof(Car) << '\n';

	TrafficSim traffic;
	traffic.addCar();
	traffic.addCar();
	traffic.addBus();
	traffic.addCar();
	traffic.addBus();
	traffic.addCar();
	traffic.payToll();
	TrafficSim t2 = traffic; // link error: TrafficSim::TrafficSim(const TrafficSim& ) 
}
	
