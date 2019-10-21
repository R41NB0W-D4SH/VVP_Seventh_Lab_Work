#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c;
	cout << "Введите стороны треугольника ABC. (Сначала A, потом B, потом C) " << endl;
	cin >> a >> b >> c;

	if (pow(a, 2) + pow(b, 2) == pow(c, 2))
	{
		cout << "Треугольник ABC является прямоугольным!" << endl;
	}
	else
	{
		cout << "Треугольник ABC НЕ является прямоугольным!" << endl;
	}

	system("pause");
	return 0;
}
