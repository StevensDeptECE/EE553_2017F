class Bitmap {
private:
	uint32_t* rgba;
	uint32_t rows,cols;
public:
  

};


int main() {
	Bitmap b1(3,5); // rows,cols or y,x (NOT x,y)
	cout << b1;
	/*
r,g,b   rgb = ((r*256 + g)*256 + b
this is the same as:
rgb = ((r << 8) + g) << 8) + b
 use setw(4) in iomanip
		0,0,0     0,0,0   255,0,255    0,0,0   255,0,0
		0,0,0     0,0,0   255,0,255    0,0,0   255,0,0
		0,0,0     0,0,0   255,0,255    0,0,0   255,0,0
	 */
	Bitmap b2(10,20);
	b2.horizLine(3, 15, 0, 0xFF00FF); // go from (3,0) to (15,0) writing color

	
	b2.vertLine(0, 8, 0, 0x000100);// go from (0,0) to (0,8) writing color
}	
