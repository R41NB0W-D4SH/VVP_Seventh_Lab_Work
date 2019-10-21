#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c, d, e;
	cout << "Введите стороны треугольника ABC. (Сначала A, потом B, потом C) " << endl;
	cin >> a >> b >> c;

	if (a + b > c)
	{
		cout << "Треугольник ABC существует с такими сторонами!" << endl;
	}
	else
	{
		cout << "Треугольник ABC НЕ существует с такими сторонами!" << endl;
	}

	system("pause");
	return 0;
}
