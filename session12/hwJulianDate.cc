class JulianDate {
private:
	double jd; // each 1 is 1 day
	static JulianDate J2000;
public:

};

JulianDate JulianDate::J2000 = ???;

int main() {
	JulianDate today; // get the date right now
	JulianDate a(2000, 1, 1, 00, 00, 00); // midnight, January 1, 2000
	JulianDate b(2000, 2, 28, 00, 00, 00); // midnight, January 1, 2000
	JulianDate c(2000, 3, 5, 04, 30, 00); // midnight, Feb. 28, 2000
	JulianDate d(2000, 1, 3, 00, 00, 00); // midnight, Jan. 3, 2000
	JulianDate e(2000, 1, 3, 12, 00, 00); // midnight, Jan. 3, 2000
	/*
		how many days in a year? 
		365
		if year mod 4 == 0 LEAP YEAR (+1)  Feb. 29
	EXCEPT	if year mod 100 == 0 NOT LEAP YEAR  (1904 LEAP     1900 NOT
	EXCEPT if year mod 400 == 0 LEAP YEAR   (2000 leap year, 2400...)

     if J2000 = January 1, 2000 = 0    January 2, 2000 = 1

		 JulianDate(2016, 3, 1)
http://www.math.harvard.edu/~knill/3dprinter/exhibits/bc/Meeus1988.pdf
	 */

	cout << d - a << " days\n"; // 2.0
	cout << e - a << " days\n"; // 2.5

	cout << a + 13 << "\n"; // what is 13 days from Jan. 1, 2000?? Jan 14, 2000
	cout << a + 13.5 << "\n";// what is 13 days from Jan. 1, 2000?? Jan 14, 2000
}
