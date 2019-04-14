#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	complex_number num1, num2, numrez;
	char act;

	cout << "Введите коэффициенты первого комплексного числа при X и Y" << endl;
	num1.x = trans();
	num1.y = trans();

	cout << "Введите коэффициенты второго комплексного числа при X и Y" << endl;
	num2.x = trans();
	num2.y = trans();

	cout << "Введите арифметическое действие" << endl;
	cin >> act;

	switch (act)
	{
	case '+':
		numrez.x = sum(num1.x, num2.x);
		numrez.y = sum(num1.y, num2.y);
		cout << "Результат: " << numrez.x << "+" << numrez.y << "i" << endl;
		break;
	case '-':
		numrez.x = raz(num1.x, num2.x);
		numrez.y = raz(num1.y, num2.y);
		cout << "Результат: " << numrez.x << "+" << numrez.y << "i" << endl;
		break;
	case '*':
		numrez.x = proX(num1.x, num1.y, num2.x, num2.y);
		numrez.y = proY(num1.x, num1.y, num2.x, num2.y);
		cout << "Результат: " << numrez.x << "+" << numrez.y << "i" << endl;
		break;
	case '/':
		numrez.x = delX(num1.x, num1.y, num2.x, num2.y);
		numrez.y = delY(num1.x, num1.y, num2.x, num2.y);
		cout << "Результат: " << numrez.x << "+" << numrez.y << "i" << endl;
		break;
	default:
		cout << "Некорректный ввод!" << endl;
		break;
	}
	return 0;
}

