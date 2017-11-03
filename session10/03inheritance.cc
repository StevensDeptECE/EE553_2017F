// speed(double)
class Vehicle {
private:
  double speed;
public:
  Vehicle(double s) : speed(s) {}
  ~Vehicle() { cout << "a"; }
};

//hp(double)
class Engine {
private:
  double hp;
public:
  Engine(double hp) : hp(hp) {}
  ~Engine() { cout << "b"; }
};

//pressure (int)
class Wheel {
private:
  int pressure;
public:
  Wheel(int p) : pressure(p) {}
  ~Wheel() { cout << "c"; }
};

class Car : public Vehicle {
private:
  Engine e;
  Wheel w1,w2,w3,w4;
  //  Wheel w[4]; // automatically calls Wheel()
public:
  Car(double s, double hp, int pressure) :					   Vehicle(s), e(hp),
   w1(pressure),
   w2(pressure),
   w3(pressure),
   w4(pressure) {}
  ~Car() { cout << "d"; }
};
int main() {
  Car c1(55.0, 200.0, 28);  // dccccba
}
