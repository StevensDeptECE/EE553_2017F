class Base {
private:
  int x;
public:
  Base(int x) : x(x) { cout << "p"; }
  ~Base()  { cout << 'q'; }
  virtual void f()const { cout << "base"; }
};

class Derived : public Base {
private:
  int y;
public:
  Derived(int x, int y) : Base(x), y(y) { cout << "Jo!"; }
  ~Derived():~Base() { cout << "x"; }
  override void f()const { cout << "derived"; }
};

int main() {
  Base b1(2); // legal
  b1.f();
  Derived d1(1,2);   //pJo!derivedxq
  d1.f();            
}



