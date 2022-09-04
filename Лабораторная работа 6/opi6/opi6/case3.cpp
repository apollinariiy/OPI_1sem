#include"case3.h"
#include<iostream>
using namespace std;

int case3()
{
	char symbol;
	float s;
	int n;
	setlocale(LC_ALL, "Russian");
	cout << "Количество символов: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Введите цифру" << " ";
		cin >> symbol;

		s = symbol;

		cout << "Код равен = " << hex << int(s) << endl;

	}


	return 0;
}
