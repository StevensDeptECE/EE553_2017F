class A {
private:
  int x;
protected: // children can see
  int y;
public:
  int z;
  A(int x, int y, int z) : x(x), y(y), z(z) {}
  void f()  { cout << "hello"; }
};
/*
  public inheritance: what was private in the parent (base) is INVISIBLE
  what was protected in the parent is protected in the child
  what was public in parent (A) is still public in B
 */

class B : public A { 
private:
  int x;
protected:
  int w;
public:
};

class C : private A {
  // what was private is INVISIBLE
  // what was protected is now PRIVATE
  // what was public is now PRIVATE
};

// other way to write:
class C {
private:
  A a;

};

int main() {
  A* p = new B(); // not legal? We aren't allowed to know that B has parent A

}

// whatever is private in A is INVISIBLE
class D : protected A {// everything in A that is protected or public -->protected

};

