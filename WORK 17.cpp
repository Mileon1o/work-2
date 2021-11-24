#include <iostream>
#include <windows.h>
using namespace std;
double Calculator(double value1, double value2, char symbol) {
	int d = value1;
	int a = value2;
	switch (symbol) {
	case('+'): return value1 + value2;
	case('-'): return value1 - value2;
	case('/'): return value1 / value2;
	case('*'): return value1 * value2;
	case('%'): return d % a;
	case('!'): return (value1 * value1 * value1) - (value2 * value2 * value2);
	case('^'): return (value1 + value2) * (value1 + value2);
	case('#'): return (value1 - value2) * (value1 - value2);
	default: cout << "ERROR!" << endl;
		system("cls");
	}
}
int main() {
	setlocale(0, "");
	cout << "[+] Приветствуем вас в программе калькулятор!" << endl;
	cout << "[-] Введите первое число: ";
	double value1;
	cin >> value1;
	cout << "[-] Введите второе число: ";
	double value2;
	cin >> value2;
	cout << "[-] Введите действие: ";
	char symbol;
	cin >> symbol;
	if (symbol == '/' and value2 == 0) {
		cout << "ERROR!" << endl;
	}
	else if (value1 == 0 and value2 == 0) {
		cout << "[=] Результат: 0";
	}
	else {
		cout << "[=] Результат: " << Calculator(value1, value2, symbol);
	}
	return 0;
}