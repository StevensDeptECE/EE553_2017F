#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream f("test.dat");
	char buffer[8192]; // 8k bytes
	strncpy(buffer, "This is our class header...writing STL file", 80);
	// how many triangles in your world???
	//&buffer[80]    buffer+80
  uint32_t x = 5;  //  0 0 0 5      5 0 0 0
	//   how much does 1 byte hold? 8 bits =  00000111  2^8 = 256
	uint32_t length = 1605;

#if 0	
	buffer[80] = length % 256;
	buffer[81] = length / 256 % 256;
	buffer[82] = length / (256*256) % 256;
	buffer[83] = length / (256*256*256) % 256;
#endif
	
  buffer[80] = length  & 0xFF;   // 	255
	// 1010010100101010101100101
	// 0000000000000000011111111
	//&0000000000000000001100101
	buffer[81] = (length >> 8) & 0xFF; // divide by 2^8
	buffer[82] = (length >> 16) & 0xFF; // divide by 65536
	buffer[83] = (length >> 24) & 0xFF; // divide by 2^8

	*((uint32_t*)(buffer+80)) = length;
	float* p = (float*)(buffer + 84);
	Vector3d v(1.0,2.0,3.0);
	float x = (float)(v.x); // old cast
	float y = float(v.y); // new C++ notation
	float z = float(v.z);
	*p = x;
	p++;
	*p = y;
	p++;
	*p = z;
	p++; // we are at byte 96

	//	len = ???
	f.write(buffer, len);
}




		
