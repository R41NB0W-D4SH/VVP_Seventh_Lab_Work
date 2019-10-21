#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c, d, e;
	cout << "Введите переменную А (четырехзначное число)" << endl;
	cin >> a;

	if (a > 999 && a < 10000)
	{
		b = a % 10;
		c = ((a % 100) - b) / 10;
		d = (a / 100) % 10;
		e = a / 1000;
		if (b == e && c == d)
		{
			cout << "Число " << a << " читается одинаково слева направо, и справа налево!" << endl;
		}
		else
		{
			cout << "Число " << a << "  НЕ читается одинаково слева направо, и справа налево!" << endl;
		}
	}
	else
	{
		cout << "Вы ввели не четырехначное число A!" << endl;
	}

	system("pause");
	return 0;
}
