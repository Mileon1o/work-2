#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "[1] �����\n";
	cout << "[2] �������\n";
	cout << "[3] �������������\n";
	cout << "[4] �����������\n";
	cout << "[5] �������\n";
	cout << "[6] �������\n";
	cout << "[7] ����\n";
	cout << "[8] �����\n";
	cout << "[+] ������� ��������: ";
	int menu;
	int a = 0;
	int size;
	int size1;
	char symbol;
	cin >> menu;
	for (bool A = true; A == true; ) {
		if (menu == 1) {
			system("cls");
			cout << "[1] ��������������\n ";
			cout << "[2] ������������\n ";
			cin >> menu;
			system("cls");
			cout << "������� ������ ";
			cin >> size;
			system("cls");
			cout << "������� ������ ";
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
			cout << "[1] ������\n";
			cout << "[2] �����������\n";
			cin >> menu;
			system("cls");
			cout << "������� ������ ";
			cin >> size;
			system("cls");
			cout << "������� ������ ";
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
			cout << "������ ";
			cin >> size;
			cout << "����� ";
			cin >> size1;
			system("cls");
			cout << "������� ������ ";
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
			cout << "������� ������ ";
			cin >> size;
			system("cls");
			cout << "������� ������ ";
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
			cout << "������� ������ ";
			cin >> size;
			system("cls");
			cout << "������� ������ ";
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
			cout << "[+] ������� ";
			cout << "������� ������ ";
			cin >> size;
			system("cls");
			cout << "������� ������ ";
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
			cout << "�� ����� ������";
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