#include "Complex.h"

using namespace std;

int trans() {
	int a;
	cin >> a;
	while ((a < -10000) || (a > 10000)) {
		cout << "¬ведите корректное число!" << endl;
		cin >> a;
	}
	return a;
}

int sum(int a, int b)
{
	return(a + b);
}

int raz(int a, int b)
{
	return(a - b);
}

int proX(int a, int b, int c, int d)
{
	return((a * c)) - ((b * d));
}

int proY(int a, int b, int c, int d)
{
	return((a * d)) + ((b * c));
}

int delX(int a, int b, int c, int d)
{
	return(((a * c)) + ((b * d)) / ((c * c) + (d * d)));
}

int delY(int a, int b, int c, int d)
{
	return(((b * c)) - ((a * d)) / ((c * c) + (d * d)));
}
