#include <iostream>
#include "windows.h"
#define clear system("cls")
using namespace std;

void cross(int menu, int color_cross, int color_zero) {
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	clear;
	int size = 1;
	int victors = 32;
	int A;
	int B;
	int game1[5][5] = {
		9,9,9,9,9,
		8,0,0,0,8,
		8,0,0,0,8,
		8,0,0,0,8,
		9,9,9,9,9
	};
	int game2[6][6] = {
		9,9,9,9,9,9,
		8,0,0,0,0,8,
		8,0,0,0,0,8,
		8,0,0,0,0,8,
		8,0,0,0,0,8,
		9,9,9,9,9,9
	};
	int game3[7][7] = {
		9,9,9,9,9,9,9,
		8,0,0,0,0,0,8,
		8,0,0,0,0,0,8,
		8,0,0,0,0,0,8,
		8,0,0,0,0,0,8,
		8,0,0,0,0,0,8,
		9,9,9,9,9,9,9
	};
	bool victory = false;
	cout << "1. ���� � �������\n";
	cout << "2. ���� � ���������\n ";
	cin >> menu;
	clear;
	cout << "������� ������:\n ";
	cout << "1. 3�3\n ";
	cout << "2. 4�4\n ";
	cout << "3. 5�5\n ";
	cin >> size;
	if (menu == 1) {


	}
	else if (menu == 2) {													//i = true;
																			//victors = 2;
		if (size == 1) {
			system("cls");
			for (int i = 0; i < 5; i++) {
				for (int h = 0; h < 5; h++) {
					if (game1[i][h] == 9) {
						SetConsoleTextAttribute(hConsole, 7);
						cout << "_";
					}
					else if (game1[i][h] == 8) {
						SetConsoleTextAttribute(hConsole, 7);
						cout << "|";
					}
					else if (game1[i][h] == 0) {
						SetConsoleTextAttribute(hConsole, 7);
						cout << "+";
					}
					else if (game1[i][h] == 1) {
						SetConsoleTextAttribute(hConsole, color_cross);
						cout << "�";

					}
					else if (game1[i][h] == 2) {
						SetConsoleTextAttribute(hConsole, color_zero);
						cout << "0";
					}
				}
				cout << "\n";
			}
			for (int i = 0; i < 9; i++) {
				if (victory == false) {
					for (bool R = false; R == false;) {
						cout << "��� ��������\n";
						cout << "������� ����� ������:";
						cin >> A;
						cout << "������� ����� �������:";
						cin >> B;
						if (game1[A][B] == 0) {
							game1[A][B] = 1;
							R = true;
							victory = true;
						}
						else {
							cout << "������� �������� ���������� �����.\n";
							Sleep(1500);
						}

					}
				}
				else if (victory == true) {
					for (bool R = false; R == false;) {
						cout << "��� ������\n";
						cout << "������� ����� ������:";
						cin >> A;
						cout << "������� ����� �������:";
						cin >> B;
						if (game1[A][B] == 0) {
							game1[A][B] = 2;
							R = true;
							victory = false;
						}
						else {
							cout << "������� �������� ���������� �����.\n";
							Sleep(1500);
						}

					}

				}
				system("cls");
				for (int i = 0; i < 5; i++) {
					for (int h = 0; h < 5; h++) {
						if (game1[i][h] == 9) {
							SetConsoleTextAttribute(hConsole, 7);
							cout << "_";
						}
						else if (game1[i][h] == 8) {
							SetConsoleTextAttribute(hConsole, 7);
							cout << "|";
						}
						else if (game1[i][h] == 0) {
							SetConsoleTextAttribute(hConsole, 7);
							cout << "+";
						}
						else if (game1[i][h] == 1) {
							SetConsoleTextAttribute(hConsole, color_cross);
							cout << "�";

						}
						else if (game1[i][h] == 2) {
							SetConsoleTextAttribute(hConsole, color_zero);
							cout << "0";
						}
					}
					cout << "\n";
				}
				if (game1[1][1] == 1) {
					if (game1[1][2] == 1) {
						if (game1[1][3] == 1) {
							i = true;
							victors = 1;
						}
					}
					if (game1[2][2] == 1) {
						if (game1[3][3] == 1) {
							i = true;
							victors = 1;
						}
					}
					if (game1[2][1] == 1) {
						if (game1[3][1] == 1) {
							i = true;
							victors = 1;
						}
					}
				}
				if (game1[1][2] == 1) {
					if (game1[1][1] == 1) {
						if (game1[1][3] == 1) {
							i = true;
							victors = 1;
						}
					}
					if (game1[2][2] == 1) {
						if (game1[3][2] == 1) {
							i = true;
							victors = 1;
						}
					}
					if (game1[1][3] == 1) {
						if (game1[1][1] == 1) {
							i = true;
							victors = 1;
						}
					}
				}
				if (game1[1][3] == 1) {
					if (game1[2][3] == 1) {
						if (game1[3][3] == 1) {
							i = true;
							victors = 1;
						}
					}
					if (game1[1][2] == 1) {
						if (game1[1][1] == 1) {
							i = true;
							victors = 1;
						}
					}
					if (game1[2][2] == 1) {
						if (game1[3][1] == 1) {
							i = true;
							victors = 1;
						}
					}
				}
				if (game1[2][1] == 1) {
					if (game1[2][2] == 1) {
						if (game1[2][3] == 1) {
							i = true;
							victors = 1;
						}
					}
					if (game1[1][1] == 1) {
						if (game1[3][1] == 1) {
							i = true;
							victors = 1;
						}
					}
					if (game1[3][1] == 1) {
						if (game1[1][1] == 1) {
							i = true;
							victors = 1;
						}
					}

				}
				if (game1[2][2] == 1) {
					if (game1[1][1] == 1) {
						if (game1[3][3] == 1) {
							i = true;
							victors = 1;
						}
					}
					if (game1[1][2] == 1) {
						if (game1[3][2] == 1) {
							i = true;
							victors = 1;
						}
					}
					if (game1[1][3] == 1) {
						if (game1[3][1] == 1) {
							i = true;
							victors = 1;
						}
					}
					if (game1[2][1] == 1) {
						if (game1[2][3] == 1) {
							i = true;
							victors = 1;
						}
					}
					if (game1[2][3] == 1) {
						if (game1[2][1] == 1) {
							i = true;
							victors = 1;
						}
					}
					if (game1[3][1] == 1) {
						if (game1[1][3] == 1) {
							i = true;
							victors = 1;
						}
					}
					if (game1[3][2] == 1) {
						if (game1[1][2] == 1) {
							i = true;
							victors = 1;
						}
					}
					if (game1[3][3] == 1) {
						if (game1[1][1] == 1) {
							i = true;
							victors = 1;
						}
					}
				}
				if (game1[2][3] == 1) {
					if (game1[1][3] == 1) {
						if (game1[3][3] == 1) {
							i = true;
							victors = 1;
						}
					}
					if (game1[3][3] == 1) {
						if (game1[1][3] == 1) {
							i = true;
							victors = 1;
						}
					}
					if (game1[2][2] == 1) {
						if (game1[1][2] == 1) {
							i = true;
							victors = 1;
						}
					}
				}
				if (game1[3][1] == 1) {
					if (game1[2][1] == 1) {
						if (game1[1][1] == 1) {
							i = true;
							victors = 1;
						}
					}
					if (game1[3][2] == 1) {
						if (game1[3][3] == 1) {
							i = true;
							victors = 1;
						}
					}
					if (game1[2][2] == 1) {
						if (game1[1][3] == 1) {
							i = true;
							victors = 1;
						}
					}
				}
				if (game1[3][2] == 1) {
					if (game1[2][2] == 1) {
						if (game1[1][2] == 1) {
							i = true;
							victors = 1;
						}
					}
					if (game1[3][1] == 1) {
						if (game1[3][3] == 1) {
							i = true;
							victors = 1;
						}
					}
					if (game1[3][3] == 1) {
						if (game1[3][1] == 1) {
							i = true;
							victors = 1;
						}
					}
				}
				if (game1[3][3] == 1) {
					if (game1[2][3] == 1) {
						if (game1[1][3] == 1) {
							i = true;
							victors = 1;
						}
					}
					if (game1[2][2] == 1) {
						if (game1[1][1] == 1) {
							i = true;
							victors = 1;
						}
					}
					if (game1[3][2] == 1) {
						if (game1[3][1] == 1) {
							i = true;
							victors = 1;
						}
					}
				}

				if (game1[1][1] == 2) {
					if (game1[1][2] == 2) {
						if (game1[1][3] == 2) {
							i = true;
							victors = 2;
						}
					}
					if (game1[2][2] == 2) {
						if (game1[3][3] == 2) {
							i = true;
							victors = 2;
						}
					}
					if (game1[2][1] == 2) {
						if (game1[3][1] == 2) {
							i = true;
							victors = 2;
						}
					}
				}
				if (game1[1][2] == 2) {
					if (game1[1][1] == 2) {
						if (game1[1][3] == 2) {
							i = true;
							victors = 2;
						}
					}
					if (game1[2][2] == 2) {
						if (game1[3][2] == 2) {
							i = true;
							victors = 2;
						}
					}
					if (game1[1][3] == 2) {
						if (game1[1][1] == 2) {
							i = true;
							victors = 2;
						}
					}
				}
				if (game1[1][3] == 2) {
					if (game1[2][3] == 2) {
						if (game1[3][3] == 2) {
							i = true;
							victors = 2;
						}
					}
					if (game1[1][2] == 2) {
						if (game1[1][1] == 2) {
							i = true;
							victors = 2;
						}
					}
					if (game1[2][2] == 2) {
						if (game1[3][1] == 2) {
							i = true;
							victors = 2;
						}
					}
				}
				if (game1[2][1] == 2) {
					if (game1[2][2] == 2) {
						if (game1[2][3] == 2) {
							i = true;
							victors = 2;
						}
					}
					if (game1[1][1] == 2) {
						if (game1[3][1] == 2) {
							i = true;
							victors = 2;
						}
					}
					if (game1[3][1] == 2) {
						if (game1[1][1] == 2) {
							i = true;
							victors = 2;
						}
					}

				}
				if (game1[2][2] == 2) {
					if (game1[1][1] == 2) {
						if (game1[3][3] == 2) {
							i = true;
							victors = 2;
						}
					}
					if (game1[1][2] == 2) {
						if (game1[3][2] == 2) {
							i = true;
							victors = 2;
						}
					}
					if (game1[1][3] == 2) {
						if (game1[3][1] == 2) {
							i = true;
							victors = 2;
						}
					}
					if (game1[2][1] == 2) {
						if (game1[2][3] == 2) {
							i = true;
							victors = 2;
						}
					}
					if (game1[2][3] == 2) {
						if (game1[2][1] == 2) {
							i = true;
							victors = 2;
						}
					}
					if (game1[3][1] == 2) {
						if (game1[1][3] == 2) {
							i = true;
							victors = 2;
						}
					}
					if (game1[3][2] == 2) {
						if (game1[1][2] == 2) {
							i = true;
							victors = 2;
						}
					}
					if (game1[3][3] == 2) {
						if (game1[1][1] == 2) {
							i = true;
							victors = 2;
						}
					}
				}
				if (game1[2][3] == 2) {
					if (game1[1][3] == 2) {
						if (game1[3][3] == 2) {
							i = true;
							victors = 2;
						}
					}
					if (game1[3][3] == 2) {
						if (game1[1][3] == 2) {
							i = true;
							victors = 2;
						}
					}
					if (game1[2][2] == 2) {
						if (game1[1][2] == 2) {
							i = true;
							victors = 2;
						}
					}
				}
				if (game1[3][1] == 2) {
					if (game1[2][1] == 2) {
						if (game1[1][1] == 2) {
							i = true;
							victors = 2;
						}
					}
					if (game1[3][2] == 2) {
						if (game1[3][3] == 2) {
							i = true;
							victors = 2;
						}
					}
					if (game1[2][2] == 2) {
						if (game1[1][3] == 2) {
							i = true;
							victors = 2;
						}
					}
				}
				if (game1[3][2] == 2) {
					if (game1[2][2] == 2) {
						if (game1[1][2] == 2) {
							i = true;
							victors = 2;
						}
					}
					if (game1[3][1] == 2) {
						if (game1[3][3] == 2) {
							i = true;
							victors = 2;
						}
					}
					if (game1[3][3] == 2) {
						if (game1[3][1] == 2) {
							i = true;
							victors = 2;
						}
					}
				}
				if (game1[3][3] == 2) {
					if (game1[2][3] == 2) {
						if (game1[1][3] == 2) {
							i = true;
							victors = 2;
						}
					}
					if (game1[2][2] == 2) {
						if (game1[1][1] == 2) {
							i = true;
							victors = 2;
						}
					}
					if (game1[3][2] == 2) {
						if (game1[3][1] == 2) {
							i = true;
							victors = 2;
						}
					}
				}
			}
		}
		else if (size == 2) {
			system("cls");
			for (int i = 0; i < 5; i++) {
				for (int h = 0; h < 6; h++) {
					if (game2[i][h] == 9) {
						cout << "_";
					}
					else if (game2[i][h] == 8) {
						cout << "|";
					}
					else if (game2[i][h] == 0) {
						cout << "+";
					}
					else if (game2[i][h] == 1) {
						cout << "�";
					}
					else if (game2[i][h] == 2) {
						cout << "0";
					}
				}
				cout << "\n";
			}
			for (bool i = false; i != true;) {
				if (victory == false) {
					cout << "��� ��������\n";
					cout << "������� ����� ������:";
					cin >> A;
					cout << "������� ����� �������:";
					cin >> B;
					game2[A][B] = 1;
					victory = true;
				}
				else if (victory == true) {
					cout << "��� ������\n";
					cout << "������� ����� ������:";
					cin >> A;
					cout << "������� ����� �������:";
					cin >> B;
					game2[A][B] = 2;
					victory = false;
				}
				system("cls");
				for (int i = 0; i < 6; i++) {
					for (int h = 0; h < 6; h++) {
						if (game2[i][h] == 9) {
							cout << "_";
						}
						else if (game2[i][h] == 8) {
							cout << "|";
						}
						else if (game2[i][h] == 0) {
							cout << "+";
						}
						else if (game2[i][h] == 1) {
							cout << "�";
						}
						else if (game2[i][h] == 2) {
							cout << "0";
						}
					}
					cout << "\n";
				}

			}
		}
		else if (size == 3) {
			system("cls");
			for (int i = 0; i < 7; i++) {
				for (int h = 0; h < 7; h++) {
					if (game3[i][h] == 9) {
						cout << "_";
					}
					else if (game3[i][h] == 8) {
						cout << "|";
					}
					else if (game3[i][h] == 0) {
						cout << "+";
					}
					else if (game3[i][h] == 1) {
						cout << "�";
					}
					else if (game3[i][h] == 2) {
						cout << "0";
					}
				}
				cout << "\n";
			}
			for (bool i = false; i != true;) {
				if (victory == false) {
					cout << "��� ��������\n";
					cout << "������� ����� ������:";
					cin >> A;
					cout << "������� ����� �������:";
					cin >> B;
					game3[A][B] = 1;
					victory = true;
				}
				else if (victory == true) {
					cout << "��� ������\n";
					cout << "������� ����� ������:";
					cin >> A;
					cout << "������� ����� �������:";
					cin >> B;
					game3[A][B] = 2;
					victory = false;
				}
				system("cls");
				for (int i = 0; i < 7; i++) {
					for (int h = 0; h < 7; h++) {
						if (game3[i][h] == 9) {
							cout << "_";
						}
						else if (game3[i][h] == 8) {
							cout << "|";
						}
						else if (game3[i][h] == 0) {
							cout << "+";
						}
						else if (game3[i][h] == 1) {
							cout << "�";
						}
						else if (game3[i][h] == 2) {
							cout << "0";
						}
					}
					cout << "\n";
				}

			}
		}
		else {
			system("cls");
			cout << "Error";
			Sleep(1500);
			system("cls");
			cross(menu, color_cross, color_zero);
		}
	}
	else {
		system("cls");
		cout << "Error";
		Sleep(1500);
		system("cls");
		cross(menu, color_cross, color_zero);
	}
	if (victors == 1) {
		system("cls");
		cout << "������� ������� \n";
		system("pause");
	}
	else if (victors == 2) {
		system("cls");
		cout << "������� ����� \n";
		system("pause");
	}
	else {
		system("cls");
		cout << " ����� ";
		Sleep(1500);
	}
}
void installation(int menu) {
	system("cls");
	int color_cross = 7;
	int color_zero = 7;
	cout << "1. ���� ��������\n";
	cout << "2. ���� ������\n";
	cout << "3. ����� � ����\n";
	cin >> menu;
	if (menu == 1) {
		// ���� �����
		cout << "�������� ���� ������." << endl;
		cout << "1. �����" << endl;
		cout << "2. �������" << endl;
		cout << "�� ������� ���� ��� �������: " << endl;
		cin >> menu;
		if (menu == 1) {
			color_cross = 9;
		}
		else if (menu == 2) {
			color_cross = 2;
		}
		else if (menu == 3) {
			color_cross = 6;
		}
		else if (menu == 4) {
			color_cross = 4;
		}
		else if (menu == 5) {
			color_cross = 5;
		}
		else {
			system("cls");
			cout << "Error";
			Sleep(1500);
			installation(menu);
		}
		installation(menu);
	}
	else if (menu == 2) {
		// ���� ����
		cout << "�������� ���� ����." << endl;
		cout << "1. �����" << endl;
		cout << "2. �������" << endl;
		cout << "�� ������� ���� ��� �������: " << endl;
		cin >> menu;
		if (menu == 1) {
			color_zero = 7;
		}
		else if (menu == 2) {
			color_zero = 2;
		}
		else if (menu == 3) {
			color_zero = 6;
		}
		else if (menu == 4) {
			color_zero = 4;
		}
		else if (menu == 5) {
			color_zero = 5;
		}
		else {
			system("cls");
			cout << "������";
			Sleep(1500);
			installation(menu);
		}
		installation(menu);
	}
	else if (menu == 3) {
	}
	else {
		system("cls");
		cout << "Error";
		Sleep(1500);
		installation(menu);
	}
}
int main(int color_cross, int color_zero) {
	setlocale(0, "");
	int menu = 0;
	for (bool h = false; h == false;) {
		system("cls");
		cout << "����� ���������� � ����!\n\n";
		cout << "1. ������ ����\n";
		cout << "2. ���������\n";
		cout << "3. �����\n";
		cin >> menu;
		if (menu == 1) {
			cross(menu, color_cross, color_zero);
		}
		else if (menu == 2) {
			installation(menu);
		}
		else if (menu == 3) {
			system("cls");
			h = true;
			cout << "�� ����� ������!";
			Sleep(1500);
		}
		else {
			system("cls");
			cout << "Error";
			Sleep(1500);
			main(color_cross, color_zero);
		}
	}
	return 0;
}