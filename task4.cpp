#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int a,b,c,d;
	cout << "Введите переменную А (трехзначное число)" << endl;
	cin >> a;

	if (a > 99 && a < 1000)
	{
		b = a % 10;
		c = ((a % 100) - b) / 10; 
		d = a / 100;
		if (d < c && c < b)
		{
			cout << "Цифры числа " << a << " образуют возрастающую последовательность" << endl;
		}
		else if (d > c && c > b)
		{
			cout << "Цифры числа " << a << " образуют убывающую последовательность" << endl;
		}
	}
	else
	{
		cout << "Вы ввели не трехначное число A!" << endl;
	}

	system("pause");
	return 0;
}
