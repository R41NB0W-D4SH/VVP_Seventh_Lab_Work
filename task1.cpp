#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(0, "");
	int a, b;
	cout << "Введите переменную А" << endl;
	cin >> a;
	cout << "Введите переменную B" << endl;
	cin >> b;

	if (a > 2 && b <= 3)
	{
		cout << "Неравенство (A > 2 и B <= 3) верно" << endl;
	}
	else
	{
		cout << "Неравенство (A > 2 и B <= 3) ложно" << endl;
	}

	system("pause");
	return 0;
}
