#include"case2.h"
#include<iostream>
using namespace std;

int case2()
{
	char rsmall, rbig;
	float r;
	int n;
	setlocale(LC_ALL, "Russian");
	cout << "���������� ��� ��������: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "������� ������� ���. �����" << " ";
		cin >> rbig;
		cout << "������� ��������� ���. �����" << " ";
		cin >> rsmall;
		rsmall = rbig - 'a' + 'A';;
		cout << int('a' - 'A') << endl;


		cout << "������� = " << int('a' - 'A') << endl;
	}
	return 0;
}
