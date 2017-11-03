class A {
private:
  int  speed;
public:
  A(int s) : speed(s) {}
  virtual void f() = 0; // pure virtual
};
class B : public A {
public:
  B() : A(55) {}
  override void f()  { cout << "B"; }
};
class C : public A {
public:
  C() : A(55) {}
  override void f()  { cout << "C"; }
};

int main() {
  //  A a1; // ILLEGAL: A is an abstract class because it contains 1 pure virtual
  A* a1; // LEGAL
  B b1; // LEGAL
  b1.f(); // LEGAL, and just as fast as if f() were not virtual
  C c1; // LEGAL
  c1.f(); // LEGAL output: C
  a1 = &b1;
  a1->f();  // slower (LEGAL)
  (*a1).f();
  a1 = &c1;
  a1->f(); // output: C
}
  
  

  
