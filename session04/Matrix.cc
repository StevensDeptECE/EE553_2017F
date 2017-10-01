class Matrix {
	double* m;
	uint32_t rows, cols;
public:
	Matrix(uint32_t rows, uint32_t cols, double val = 0) {
	}
	// what do we need here???
	// constructor, destructor, copy constructor, operator =
	/*
		0  1   2  3
    4  5   6  7
    8  9  10 11
	 */

	
	double operator ()const (uint32_t r, uint32_t c) {
		return m[r*cols + c];
	}
	double& operator ()(uint32_t r, uint32_t c) {
		return m[r*cols + c];
	}
	/*
		operator +...

		for (int i = 0; i < rows; i++)
		for (int j = ; j < cols; j++)
      ans(i,j) = a(i,j) + b(i,j)

			writing with a single loop is faster
	 */	

};

int main() {
	Matrix a(3,4, 5.2); // create 3 rows of 4 columns containing 5.2
	Matrix b(3,4); // defaults to 0.0
	cout << a << '\n';
	/*
		5.2 5.2 5.2 5.2
		5.2 5.2 5.2 5.2
		5.2 5.2 5.2 5.2

	 */

	Matrix c(3,4,1.2);

	cout << c(2,2);
	c(0,0) = -1.5;
	/*
c=
		-1.5 1.2 1.2 1.2
		 1.2 1.2 1.2 1.2
		 1.2 1.2 1.2 1.2

	 */
	Matrix d = a + c;
	/*
		3.7 6.4 6.4 6.4
		6.4 6.4 6.4 6.4
		6.4 6.4 6.4 6.4
	 */
	cout << d;
	Matrix e = a - c;

	//optional
	Matrix f(4,3,1.5);
	Matrix g = f * b; // matrix multiplication

	
}




	
