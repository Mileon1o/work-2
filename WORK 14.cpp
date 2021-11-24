#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	const int value = 10;
	int arr[value] = { 15, 21, 141, 291, 961, 3, 11, 91, 33, 51 };
	for (int i = 0; i < value; i++) {
		cout << "[" << i + 1 << "] " << arr[i] << endl;
	}
	short arr1[value] = { 1531, 212, 14127, 2911, 9619, 303, 1171, 9109, 331689, 51928013 };
	for (int i = 0; i < value; i++) {
		cout << "[" << i + 1 << "] " << arr1[i] << endl;
	}
	long arr2[value] = { 15, 21, 141, 291, 961, 3, 11, 91, 33, 51 };
	for (int i = 0; i < value; i++) {
		cout << "[" << i + 1 << "] " << arr2[i] << endl;
	}
	bool arr3[value] = { true, false, true, false, false, true, false, true, true, false };
	for (int i = 0; i < value; i++) {
		cout << "[" << i + 1 << "] " << arr3[i] << endl;
	}
	string arr4[value] = { "arm", "STR", "HTML", "SATA", "OPIUM", "SHR", "BOOL", "APP", "TOP", "FALL" };
	for (int i = 0; i < value; i++) {
		cout << "[" << i + 1 << "] " << arr4[i] << endl;
	}
	char arr5[value] = { 'A', 'N', '5', '@', '*', 'T', '+', '#', '1', '$' };
	for (int i = 0; i < value; i++) {
		cout << "[" << i + 1 << "] " << arr5[i] << endl;
	}
	float arr6[value] = { 15.88, 21.1634, 1.41, 29.1, 9.61, 3, 11.407, 9.01, 3.0003, 0.51 };
	for (int i = 0; i < value; i++) {
		cout << "[" << i + 1 << "] " << arr6[i] << endl;
	}
	double arr7[value] = { 15.777, 2.1, 14.001, 291.373, 961.0093, 3.777, 11.40093, 91.16453, 3.00003, 51.999368 };
	for (int i = 0; i < value; i++) {
		cout << "[" << i + 1 << "] " << arr7[i] << endl;
	}
	return 0;
}