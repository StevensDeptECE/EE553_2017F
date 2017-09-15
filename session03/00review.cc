#include <iostream>
#include <cstdint>
#include <string>
using namespace std;

int main() {
  uint8_t a = 0; // 0 .. 255  sizeof(a) = 1
  uint16_t b = 0; // 0 .. 65535  sizeof(b) = 2
  uint32_t c = 1241241;  
  uint64_t d = 0;

  int32_t i = -1241;

  bool x = false; // sizeof(x)
  x = true;
  float f = 1.5f;
  double d1 = 1.2345; // sizeof(d1) == 8  possible computer = 1
  long double d2 = 1.2345L;
  char y = 'x';
  y = '\n'; // \t tab   \x0f  character 0*16+15 (hex)  \\   \'
  y = '\''; //y is a quote
  y = '\\'; // y is a backslash
  string s = "abc";
}
