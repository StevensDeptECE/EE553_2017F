#include <iostream>
class A {
public:
	virtual void f() = 0;// pure virtual
}; //parent, superclass
class B: public A {}; // child, subclass
class C: public B {
	void f() { ... }
}; // C is a child of B
class D: public  A {}; // B and D are siblings

int main() {
  // What is an abstract class?	contains at least one pure virtual function
	// An abstract class cannot be instantiated
	A a1; // error, A is abstract
	B b1; // error, B is abstract
	C c1; // C is a concrete class, that can be instantiated

	A* p = new C;



}

