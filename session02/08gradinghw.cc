// the first example answer is DEFINITELY not int!!!


double average(const int x[], int n) {


}

void readIn(int x[], int n) {

}

int main() {
	int grades[] = {85, 90, 91, 87};
	cout << average(grades, sizeof(grades)/sizeof(int));
	int n;
	cout << "Please enter the number of grades:";
	cin >> n;
	
	int grades2[n];
	readIn(grades2, n);
  cout << average(grades2, n) << '\n';
}
