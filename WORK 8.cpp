#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "[1] Линия\n";
	cout << "[2] Квадрат\n";
	cout << "[3] Прямоугольник\n";
	cout << "[4] Треугольник\n";
	cout << "[5] Решетка\n";
	cout << "[6] Крестик\n";
	cout << "[7] Плюс\n";
	cout << "[8] Выход\n";
	cout << "[+] Введите значение: ";
	int menu;
	int a = 0;
	int size;
	int size1;
	char symbol;
	cin >> menu;
	for (bool A = true; A == true; ) {
		if (menu == 1) {
			system("cls");
			cout << "[1] Горизонтальная\n ";
			cout << "[2] Вертикальная\n ";
			cin >> menu;
			system("cls");
			cout << "Введите размер ";
			cin >> size;
			system("cls");
			cout << "Введите символ ";
			cin >> symbol;
			if (menu == 1) {
				system("cls");
				while (a < size) {
					cout << symbol;
					a++;

				}
				system("pause");
			}
			else if (menu == 2) {
				system("cls");
				while (a < size) {
					cout << symbol << endl;
					a++;
				}
			}

		}
		else if (menu == 2) {
			system("cls");
			cout << "[1] Пустой\n";
			cout << "[2] Заполненный\n";
			cin >> menu;
			system("cls");
			cout << "Введите размер ";
			cin >> size;
			system("cls");
			cout << "Введите символ ";
			cin >> symbol;
			if (menu == 1) {
				system("cls");
				for (int h = 0; h < size; h++) {

					for (int b = 0; b < size; b++) {

						if (h == 0) {
							cout << symbol;

						}
						else if (b == 0) {
							cout << symbol;
						}
						else if (b == size - 1) {
							cout << symbol;
						}
						else if (h == size - 1) {
							cout << symbol;
						}
						else {
							cout << " ";

						}
					}

					cout << endl;
				}

				system("pause");
			}
			else if (menu == 2) {
				system("cls");
				for (int h = 0; h < size; h++) {

					for (int b = 0; b < size; b++) {
						cout << symbol;
					}
					cout << endl;
				}
				system("pause");
			}

		}
		else if (menu == 3) {
			system("cls");
			cout << "Ширина ";
			cin >> size;
			cout << "Длина ";
			cin >> size1;
			system("cls");
			cout << "Введите символ ";
			cin >> symbol;
			for (int h = 0; h < size1; h++) {
				if (h == 0) {
					for (int b = 0; b < size; b++) {
						cout << symbol;

					}
					cout << endl;
					cout << endl;
				}
				else if (h == size - 1) {
					for (int b = 0; b < size; b++) {
						cout << symbol;

					}
					cout << endl;
					cout << endl;
				}
				else {
					for (int b = 0; b < size; b++) {
						cout << symbol;
					}
					cout << endl;
					cout << endl;
				}
			}
			system("pause");
		}
		else if (menu == 4) {
			system("cls");
			cout << "Введите размер ";
			cin >> size;
			system("cls");
			cout << "Введите символ ";
			cin >> symbol;
			for (int a = 0; a < size; a++) {
				for (int h = -1; h < a; h++) {
					cout << symbol;
				}
				cout << endl;
			}
			system("pause");
		}
		else if (menu == 5) {
			system("cls");
			cout << "Введите размер ";
			cin >> size;
			system("cls");
			cout << "Введите символ ";
			cin >> symbol;
			for (int a = 0; a < size; a++) {
				if (a % 2 == 0) {
					for (int h = 0; h < size; h++) {
						cout << symbol;
					}
					cout << endl;
				}
				else if (a % 2 > 0) {
					for (int h = 0; h < size; h++) {
						if (h % 2 == 0) {
							cout << symbol;
						}
						else {
							cout << " ";
						}
					}
					cout << endl;
				}
			}
			system("pause");
		}
		else if (menu == 6) {
			system("cls");
			cout << "[+] Крестик ";
			cout << "Введите размер ";
			cin >> size;
			system("cls");
			cout << "Введите символ ";
			cin >> symbol;
			for (int a = 0; a < size; a++) {
				if (a == 0) {

				}
				else if (a == size - 1) {

				}







			}
			system("pause");

		}
		else if (menu == 7) {

		}
		else if (menu == 8) {
			system("cls");
			cout << "До новых встреч";
			Sleep(1500);
			return 0;
		}
		else {
			system("cls");
			cout << "ERROR";
			Sleep(1500);
		}
	}
	return 0;
}