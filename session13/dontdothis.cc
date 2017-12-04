class Array {
private:
	int size;
public:
	double operator[](int i) const {
		if (i> size)
			throw OutOfBounds(...);
	}
int main() {
	Array a;
	for (int i = 0; i < 10; i++)
		a.add(i);

	try {
		for (int i = 0; ; i++)
			cout << a[i];
	} catch (OutOfBounds  e) {
	}

	


	
