#include"case2.h"
#include<iostream>
using namespace std;

int case2()
{
	char rsmall, rbig;
	float r;
	int n;
	setlocale(LC_ALL, "Russian");
	cout << "Количество пар символов: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Введите большую рус. букву" << " ";
		cin >> rbig;
		cout << "Введите маленькую рус. букву" << " ";
		cin >> rsmall;
		rsmall = rbig - 'a' + 'A';;
		cout << int('a' - 'A') << endl;


		cout << "Разница = " << int('a' - 'A') << endl;
	}
	return 0;
}
