#include"case1.h"
#include<iostream>
using namespace std;
int case1()
{
	char lsmall, lbig;
	float l;
	int n;
	setlocale(LC_ALL, "Russian");
	cout << "Количество пар символов: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Введите большую лат. букву" << " ";
		cin >> lbig;
		cout << "Введите маленькую лат. букву" << " ";
		cin >> lsmall;
		int(l) = abs(int(lbig) - int(lsmall));

		cout << "Разница = " << int(l) << endl;
	}

	
return 0;
}
