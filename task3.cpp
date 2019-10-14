#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int a;
	cout << "Введите переменную А" << endl;
	cin >> a;

	if (a > 9 && a < 100 && a % 2 == 0)
	{
		cout << "Данное число является четным двузначным - верно" << endl;
	}
	else
	{
		cout << "Данное число является четным двузначным - ложно" << endl;
	}

	system("pause");
	return 0;
}
