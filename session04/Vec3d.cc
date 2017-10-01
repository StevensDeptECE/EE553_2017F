class Vec3d {



};

int main() {
	Vec3d a(1.0, 2.5, 3.0);
	Vec3d b(1.0, 2.5); // z=0
	Vec3d c(1.0); // y,z = 0
	Vec3d d; // x,y,z=0
	//	Vec3d e(); //THIS IS A FUNCTION!!!
	Vec3d e = a * 2; // scalar multiplication
	Vec3d f = 2 * a; // reverse direction
	Vec3d g = a + b; // vector addition
	Vec3d h = a - b; // vector subtraction
	double z1 = dot(a,b); // function
	double z2 = a.dot(b); // method
	// add static later
	double w1 = a.dist(b);
	double w2 = dist(a,b);
}
