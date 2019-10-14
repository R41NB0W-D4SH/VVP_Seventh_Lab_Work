#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b, c;
	cout << "Введите переменную А" << endl;
	cin >> a;
	cout << "Введите переменную B" << endl;
	cin >> b;
	cout << "Введите переменную C" << endl;
	cin >> c;

	if (a < b && b < c)
	{
		cout << "Неравенство (A < B < C) верно" << endl;
	}
	else
	{
		cout << "Неравенство (A < B < C) ложно" << endl;
	}

	system("pause");
	return 0;
}
