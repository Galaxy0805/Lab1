#include "Complex.h"

using namespace std;

int trans() {
	int a;
	cin >> a;
	while ((a < -10000) || (a > 10000)) {
		cout << "������� ���������� �����!" << endl;
		cin >> a;
	}
	return a;
}

int sumX(int x1, int x2)
{
	return(x1 + x2);
}

int sumY(int y1, int y2)
{
	return(y1 + y2);
}

int razX(int x1, int x2)
{
	return(x1 - x2);
}

int razY(int y1, int y2)
{
	return(y1 - y2);
}

int proX(int x1, int y1, int x2, int y2)
{
	return((x1 * x2)) - ((y1 * y2));
}

int proY(int x1, int y1, int x2, int y2)
{
	return((x1 * y2)) + ((y1 * x2));
}

int delX(int x1, int y1, int x2, int y2)
{
	return(((x1 * x2)) + ((y1 * y2)) / ((x2 * x2) + (y2 * y2)));
}

int delY(int x1, int y1, int x2, int y2)
{
	return(((y1 * x2)) - ((x1 * y2)) / ((x2 * x2) + (y2 * y2)));
}
