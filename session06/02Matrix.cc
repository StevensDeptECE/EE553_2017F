#include <iostream>
using namespace std;

class BadSize {
private:
	const char* filename;
	int linenum;
public:
	BadSize(const char* filename, int linenum) :
		filename(filename), linenum(linenum) {}
	friend ostream& operator <<(ostream& s, const BadSize& b) {
		return s << "BadSize: " << b.filename << ": " << b.linenum << '\n';
	}
};

class Matrix {
private:
	double* p;
	int rows;
	int cols;
public:
	Matrix(int r, int c, double init = 0) : p(new double[r*c]), rows(r), cols(c) {
#if 0
		// less efficient, and more complicate
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				p[i * c +  j] = 0;
#endif
		for (int i = 0; i < r*c; i++)
				p[i] = init;
	}
	
	~Matrix() {
		delete [] p;
	}
  double& operator ()(int i, int j) {
		return p[i * cols + j];
	}
  double operator ()(int i, int j) const {
		return p[i * cols + j];
	}

	friend Matrix operator +(const Matrix& a, const Matrix& b) {
		if (a.rows != b.rows || a.cols != b.cols)
			throw BadSize(__FILE__, __LINE__);


		
	}
};

int main() {
	Matrix m1(3,4); // all zeros
	m1(1,2) = 1.5;
	m1(2,2) = -1.0;
	//	m1(1,2,5,"hello"); we could do this, if we had a reason...
  const	Matrix m2(3,4, 3.0);
	try {
		cout << m2(1,1);
		Matrix m3 = m1 + m2;
		Matrix m4(2,2);
		Matrix m5 = m1 + m4; // not the same size!!!!!!
	} catch(const BadSize& e) {
		cout << e << "\n";
	}

}


