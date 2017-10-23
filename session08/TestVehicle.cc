#include "Vehicle.hh"

int main() {
	Car c1("yellow", 99);
	Bus b1(28, 35);
	Truck t1(18000, 42);

#if
	// virtual functions and polymorphism
	vector<Vehicle*> vehicles;
	vehicles.push_back(new Car(  ));
	vehicles.push_back(new Bus(  ));
	for (auto v : vehicles) {
		v.payToll();
#endif
}
