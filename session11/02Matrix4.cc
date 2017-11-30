class Matrix4 {
private:
	double a, b, c, d;  // 8 x 12 bytes
	double e, f, g, h;
	double i, j, k, m;
public:
	Matrix() { // identity
		// 1 0 0 0
		// 0 1 0 0
		// 0 0 1 0
	}
	// no destructor needed, no dynamic  memory
	// no copy constructor needed, default copy is correct
	//	Matrix4(const Matrix4& orig) : a(orig.a), b(orig.b) , ...  {}
	//operator = same
	void apply(Vector3d v) {
		// x = a*v.x + b*v.y + c*v.z + d; // d is translation in the X
		// y = e*v.x + f*v.y + g*v.z + h; // h is translation in Y
		// v.z = i*v.x + j*v.y + k*v.z + m;
		v.x = x;
		v.y = y;
		//		v.z = z;
	}
	// make apply work polymorphically!!
	void apply(Shape& s) {
		
	}

	/*scale(2,1,0.5)
		2 0 0   0
    0 1 0   0
		0 0 0.5 0
	 */
	/*
	rotateZ
	  cos(t)   sin(t)  0    0
		-sin(t)  cos(t)  0    0
		0        0       1    0
	*/

	/*
	rotateY
	  cos(t)   0      sin(t)  0
    0        1       0      0
		-sin(t)  0      cos(t)  0
		0        0       1      0
	*/

	/* translate(tx,ty,tz)
    1  0   0   tx
    0  1   0   ty
    0  0   1   tz
	*/
};

