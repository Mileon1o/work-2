#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    double a, b;
    int c, d;
    char menu;
    cout << "[-]�������� ������: ";
    cin >> menu;
    if (menu == '+')
    {
        cout << "[-]������� ������ �����: ";
        cin >> a;
        cout << "[-]������� ������ �����: ";
        cin >> b;
        cout << "[-]���������: " << a << " + " << b << " = " << a + b;
    }
    else if (menu == '-')
    {
        cout << "[-]������� ������ �����: ";
        cin >> a;
        cout << "[-]������� ������ �����: ";
        cin >> b;
        cout << "[-]���������: " << a << " - " << b << " = " << a - b;
    }
    else if (menu == '*')
    {
        cout << "[-]������� ������ �����: ";
        cin >> a;
        cout << "[-]������� ������ �����: ";
        cin >> b;
        cout << "[-]���������: " << a << " * " << b << " = " << a * b;
    }
    else if (menu == '/')
    {
        cout << "[-]������� ������ �����: ";
        cin >> a;
        cout << "[-]������� ������ �����: ";
        cin >> b;
        if (b == 0) {
            cout << "������!";
        }
        else {
            cout << "[-]���������: " << a << " / " << b << " = " << a / b;
        }
    }
    else if (menu == '%')
    {
        cout << "[-]������� ������ �����: ";
        cin >> c;
        cout << "[-]������� ������ �����: ";
        cin >> d;
        cout << "[-]���������: " << c << " % " << d << " = " << c % d;
    }
    else
        cout << "[-]�� ����� �� ������ ��������!";
    return 0;
}