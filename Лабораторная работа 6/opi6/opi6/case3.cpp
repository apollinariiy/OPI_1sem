#include"case3.h"
#include<iostream>
using namespace std;

int case3()
{
	char symbol;
	float s;
	int n;
	setlocale(LC_ALL, "Russian");
	cout << "���������� ��������: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "������� �����" << " ";
		cin >> symbol;

		s = symbol;

		cout << "��� ����� = " << hex << int(s) << endl;

	}


	return 0;
}
