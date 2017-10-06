#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
	char* p;
	int len;
	int capacity;
public:
	String(int size) : p(new char [size]), len(0), capacity(size) {}
	~String() { delete [] p; } // IMPLEMENTATION DEFINED if you are missing []
	String(const String& orig) : p(new char[orig.capacity]),
															 len(orig.len), capacity(orig.capacity) {
		char*p1 = p;
		const char* p2 = orig.p;
		for (int i = 0; i < len; i++) {
			//			p1[i] = p2[i];
			//			p1[i] = *(p2+i);
			/*
			*p1 = *p2;
			p1++;
			p2++;
			*/

			*p1++ = *p2++;
		}
	}
	String& operator =(const String& orig) {
    String copy(orig);
		swap(p, copy.p);
		len = copy.len;
		capacity = copy.capacity;
		return *this;
	}
	friend String& operator +=(String& s, const char* str);
	friend ostream& operator <<(ostream& s, const String& str) {
		for (int i = 0; i < str.len; i++)
			s << str.p[i];
		return s;
	}

	String(String&& orig) : p(orig.p), len(orig.len), capacity(orig.capacity) {
		orig.p = nullptr;
	}
};

String& operator  +=(String& s, const char* str) {
	int slen = strlen(str);
	if (s.len + slen > s.capacity) {
		char* temp = s.p;
		s.p = new char[s.len + slen];
		memcpy(s.p, temp, s.len); // copy what we used to have into new memory
		s.capacity = s.len + slen;
		delete[] temp;
	}
	memcpy(s.p+s.len, str, slen); // copy in the new characters
	s.len += slen;
	return s; // the object itself
}

String f(){
	String hello(6);
	hello += "hello";
  return hello;
}
int main() {
	String s1(2);
	String s2(100);
	s2 = s1 += "abc";
	cout << s2;
  cout << f();
}
