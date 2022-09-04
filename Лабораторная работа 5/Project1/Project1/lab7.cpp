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
	puts("¬ведите номер операции:\n1 Ц определение разницы значений кодов в Windows-1251 буквы латинского алфавита в прописном и строчном написании;\n2 Ц определение разницы значений кодов в Windows - 1251 буквы русского алфавита в прописном и строчном написании; \n3 Ц вывод в консоль кода символа, соответствующего введенной цифре;");
	cin >> n;
	switch (n) {
	case 1:
	{ 
		cout << "¬ведите желаемое кол-во букв" << " ";
		cin >> kolichestvo;
		for (int i = 0; i < kolichestvo; i++){
		cout << "¬ведите большую латинскую букву" << " ";
		cin >> latinbig;
		cout << "¬ведите маленькую латинскую букву" << " ";
		cin >> latinsmall;
		resultlatin = latinsmall - latinbig;
		cout << resultlatin << endl;
		}
		break;
	}
	case 2:
	{cout << "¬ведите желаемое кол-во букв" << " ";
	cin >> kolichestvo;
	for (int i = 0; i < kolichestvo; i++) {
		cout << "¬ведите большую русскую букву" << " ";
		cin >> russianbig;
		cout << "¬ведите маленькую русскую букву" << " ";
		cin >> russiansmall;
		resultrussian = russiansmall - russianbig;
		cout << resultrussian << endl;
	}
		break; 
	}
	case 3:
	{ cout << "¬ведите желаемое кол-во цифр" << " ";
	cin >> kolichestvo;
	for (int i = 0; i < kolichestvo; i++) {
	   	cout << "¬ведите цифру" << " ";
		cin >> number;
		resultnumber = number;
		cout << hex << int(resultnumber);
	}
		break;
	}
	default:
		cout << "Ќеверное значение";
	}
}
