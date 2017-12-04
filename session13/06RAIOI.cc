class MyStinkyObject {
private:
	int* a;
	int* b;
public:
	MyStinkyObject() {
		a = new int[1000];
		if (a == nullptr)
			throw "No memory, getting out";
		b = new int[1000000000];
		if (b == nullptr) {
			delete []a;
			throw "No Memory, getting out2";
		}
	}

};
