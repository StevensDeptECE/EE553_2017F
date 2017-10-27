template<typename T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

int main() {
	string a = "abc", b = "def";
	swap(a,b);

	int d = 1,e = 2;
	swap(d,e);
}
