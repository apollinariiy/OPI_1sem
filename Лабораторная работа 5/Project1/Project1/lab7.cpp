#include <iostream>
#include <Windows.h>
using namespace std;
int main() {

	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char latinbig, latinsmall, russianbig, russiansmall, number;
	float resultlatin, resultrussian, resultnumber;
	int n,kolichestvo;
	puts("������� ����� ��������:\n1 � ����������� ������� �������� ����� � Windows-1251 ����� ���������� �������� � ��������� � �������� ���������;\n2 � ����������� ������� �������� ����� � Windows - 1251 ����� �������� �������� � ��������� � �������� ���������; \n3 � ����� � ������� ���� �������, ���������������� ��������� �����;");
	cin >> n;
	switch (n) {
	case 1:
	{ 
		cout << "������� �������� ���-�� ����" << " ";
		cin >> kolichestvo;
		for (int i = 0; i < kolichestvo; i++){
		cout << "������� ������� ��������� �����" << " ";
		cin >> latinbig;
		cout << "������� ��������� ��������� �����" << " ";
		cin >> latinsmall;
		resultlatin = latinsmall - latinbig;
		cout << resultlatin << endl;
		}
		break;
	}
	case 2:
	{cout << "������� �������� ���-�� ����" << " ";
	cin >> kolichestvo;
	for (int i = 0; i < kolichestvo; i++) {
		cout << "������� ������� ������� �����" << " ";
		cin >> russianbig;
		cout << "������� ��������� ������� �����" << " ";
		cin >> russiansmall;
		resultrussian = russiansmall - russianbig;
		cout << resultrussian << endl;
	}
		break; 
	}
	case 3:
	{ cout << "������� �������� ���-�� ����" << " ";
	cin >> kolichestvo;
	for (int i = 0; i < kolichestvo; i++) {
	   	cout << "������� �����" << " ";
		cin >> number;
		resultnumber = number;
		cout << hex << int(resultnumber);
	}
		break;
	}
	default:
		cout << "�������� ��������";
	}
}
