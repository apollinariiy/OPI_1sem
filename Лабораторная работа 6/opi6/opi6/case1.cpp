#include"case1.h"
#include<iostream>
using namespace std;
int case1()
{
	char lsmall, lbig;
	float l;
	int n;
	setlocale(LC_ALL, "Russian");
	cout << "���������� ��� ��������: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "������� ������� ���. �����" << " ";
		cin >> lbig;
		cout << "������� ��������� ���. �����" << " ";
		cin >> lsmall;
		int(l) = abs(int(lbig) - int(lsmall));

		cout << "������� = " << int(l) << endl;
	}

	
return 0;
}
