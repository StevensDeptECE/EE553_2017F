#include <iostream>
#include <vector>
using namespace std;

struct A { // like a class, but everything is PUBLIC!!!

};

//polymorphism : send the same message to different objects
// execute different methods (at runtime)

class Vehicle {
  friend ostream& operator <<(ostream& s, const Vehicle& v) {
    v.Vehicle::print(s);
    v.print(s);
    return s;
  }
public:
  virtual void payToll()const = 0;
  virtual void print(ostream& s) const { s<< "I am a vehicle"; } 
};

// inheritance: A Car IS_A Vehicle
class Car : public Vehicle {
public:
  void payToll()const { cout << "I am a car, paying $15"; }
  void print(ostream& s) const { s<< "I am a Car"; } 
};
// inheritance: A Car IS_A Vehicle
class Truck : public Vehicle {
public:
  void payToll()const { cout << "I am a truck, paying $90"; }
  void print(ostream& s) const { s<< "I am a Truck"; } 
};

int main() {
  Car c1;
  c1.payToll();

  Truck t1;
  t1.payToll();

  Vehicle* pv = &c1;
  pv ->payToll(); //polymorphism: we do not know which one is executed

  pv = & t1;
  pv ->payToll();  // why doesn't the compiler know?

  vector<Vehicle*> vehicles ;
  vehicles.push_back(new Car());
  vehicles.push_back(new Truck());
  vehicles.push_back(new Car());
  vehicles.push_back(new Car());
  vehicles.push_back(new Truck());
  vehicles.push_back(new Truck());
  vehicles.push_back(new Truck());
#if 0
  //method 1 of writing this:
  for (int i = 0; i < vehicles.size(); i++) {
    cout << vehicles[i] << " " << *vehicle[i] << '\n';

  for (int i = 0; i < vehicles.size(); i++)
    vehicles[i] -> payToll();

  for (int i = 0; i < vehicles.size(); i++)
    delete vehicles[i];
#endif
  
  for (vector<Vehicle*>::iterator i = vehicles.begin();
       i != vehicles.end(); ++i)
    cout << *i << ' ' << **i << '\n';
  
  for (vector<Vehicle*>::iterator i = vehicles.begin();
       i != vehicles.end(); ++i)
    (*i)->payToll();
  
  for (vector<Vehicle*>::iterator i = vehicles.begin();
       i != vehicles.end(); ++i)
    delete *i;
}
