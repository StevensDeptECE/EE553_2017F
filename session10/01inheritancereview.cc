class A {};

class B : public A {
private:
  int x;
public:
  B(int x) : x(x) { cout << "p"; }
  ~B() { cout << 'q'; }
};

int  main()  {
  A a1; // legal______________________________
  A* pa1; //LEGAL
  //  cout << *pa1; // ILLEGAL, looking at uninitialized memory (CRASH)
  //B b1; // ILLEGAL: no such constructor
  B b1(5); // LEGAL
  B b2(5.2); // LEGAL 5.2 --> 5 (warning)
  B b3((int)5.2); // LEGAL
  B *pb4; // LEGAL
  pb4 = &b3; // point to b3
  //  pb4->x = 5; // ILLEGAL (private)

  
  


  
