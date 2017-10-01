#include <iostream>
#include <cstdint>
using namespace std;

class String {
private:
  char* p;
  uint32_t len;
  uint32_t capacity;
  
public:
  // s = "def"
  String(const char s[]) {
    //strlen
    // count how many letters until ASCII NUL '\0'
    //  <  >  >=  <=  ==  !=
    int i;
    for (i = 0; s[i] != '\0'; ++i)
      ;
    //
    p = new char[i];
    len = i;
    capacity = i;
    for(int j = 0; j < len; j++)
      p[j] = s[j];
  }
  String() {
    p = new char[1];
    len = 0;
    capacity = 1;
  }

  // copy constructor
  String(const String& orig) : p(new char[orig.capacity]),
			       len(orig.len),
			       capacity(orig.capacity) {
    for (uint32_t i = 0; i < len; ++i)
      p[i] = orig.p[i];
  }
  String& operator = (const String& orig) {
    String copy(orig);
    swap(copy.p, p);
    len = orig.len;
    capacity = orig.capacity;
    //    swap(copy.len, len);
    //swap(copy.capacity, capacity);    
  }
  ~String() {
    delete [] p;
  }
  friend ostream& operator <<(ostream& s, const String& str);

};

ostream& operator <<(ostream& s, const String& str) {
  for (uint32_t i = 0; i < str.len; ++i)
    s << str.p[i];
  return s;
}
// "abc" + "def" --> "abcdef"
String operator +(const String& a, const String& b) {
  String result;
  len = a.len + b.len;
  result.p = new char[len];
  capacity = len;
  for (uint32_t i = 0; i < a.len; i++)
    result.p[i] = a.p[i];
  for (uint32_t i = a.len; i < result.len; i++)
    result.p[i] = b.p[i-a.len];
}


// "def" --> array 'd' 'e' 'f' '\0'
int main() {
  for (uint32_t i = 0; i < 1000; i++) {
    String s1("def"); //def
  }
  String s1("xyz");
  String s2; // empty string
  cout << s1; // def
  cout << s2; //print nothing
  // 2 + 3 + 4
  cout << s1 << s2 << 5+4 << '\n';
  String s3("abc", 5); // abcabcabcabcabc
  String s4 = s3; // make a copy (call copy constructor)
  String s5(s3);  // same (call copy constructor)

  s4 = s1; // operator =, first deallocate what was there in s4 before copy
  String s5 = s4 + s1; // concatenation abcabcabcabcabcxyz
  cout << s5;
}


