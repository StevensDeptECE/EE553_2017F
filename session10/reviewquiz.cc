class Shape {
private:
  double x,y;
public:
  double getX() const { return x; }
  double getY() const { return y; }
  
  Shape(double x, double y) : x(x), y(y) { }
  virtual void print() const  = 0;
  virtual double area() const = 0;

  virtual void info() const = 0;
  virtual bool contains(double x, double y) const = 0;
  virtual ~Shape (){ delete [] q; }
};


class Rect : public Shape {
private:
  double w, h;
public:
  Rect(double x, double y, double w, double h) : Shape(x,y), w(w), h(h) {
  }
  override void print() const {
    cout << getX() << ' ' << getY() << ' ' << w << ' ' << h;
  }
  override double area() const  {
    return w*h;
  }

  override void info() const  {
    print();
  }
  override bool contains(double x, double y) const  {
    return x >= getX()-w/2 && x <= getX() + w/2   &&
      y >= getY()-w/2 && y <= getY() + w/2;
  }

};
constexpr double pi = 3.1415926535;
class Circle : public Shape {
private:
  double r;
public:
  Circle(double x, double y, double r) : Shape(x,y), r(r) {}
  
  override void print() const {
    cout << getX() << ' ' << getY() << ' ' << r;
  }
  override double area() const  {
    return pi* r*r;
  }

  override void info() const  {
    print();
  }
  override bool contains(double x, double y) const  {
    double dx = x - getX(), dy = y - getY();
    return dx*dx + dy*dy <= r*r;
  }
};

class Drawing {
  vector<Shape*> shapes;
public:
  Drawing() : shapes() {}
  ~Drawing() {
    for (auto s : shapes) {
      delete s; 
    }
  }
  
}


int main() {
  vector<Shape*> shapes;
  shapes.push_back(new Circle(50,100, 20));
  shapes.push_back(new Rect(400,50,100, 20));
  for (auto s : shapes) {
    s->info();
    cout << s->area() << '\n';
  }

}
