#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "[-]��������� \"����������\"" << endl;
    cout << endl;
    cout << "[1]������� �����" << endl;
    cout << "[2]���������� �����" << endl;
    cout << endl;
    cout << "[3]�����" << endl;
    int menu;
    cin >> menu;
    system("cls");
    switch (menu)
    {
    case 1:
        cout << "[-]���������� \"������ ������� ����\"" << endl;
        cout << endl;
        cout << "[1]����������" << endl;
        cout << "[2]����" << endl;
        cout << "[3]�������" << endl;
        cout << "[4]��������" << endl;
        cout << "[5]������" << endl;
        cout << "[6]����" << endl;
        cout << "[7]����" << endl;
        cout << "[8]���������" << endl;
        cout << "[9]�����" << endl;
        cout << "[10]����" << endl;
        cout << "[11]�������" << endl;
        cout << "[12]���" << endl;
        cout << "[13]�������" << endl;
        cout << "[14]�����" << endl;
        cout << "[15]����" << endl;
        cout << endl;
        cout << "[-]�������� ����� �����: ";
        cin >> menu;
        system("cls");
        switch (menu)
        {
        case 1:
            cout << "[-]�������: ���������� - Keyboard";
            break;
        case 2:
            cout << "[-]�������: ���� - Mouse";
            break;
        case 3:
            cout << "[-]�������: ������� - Monitor";
            break;
        case 4:
            cout << "[-]�������: �������� - Headphones";
            break;
        case 5:
            cout << "[-]�������: ������ - Rug";
            break;
        case 6:
            cout << "[-]�������: ���� - Table";
            break;
        case 7:
            cout << "[-]�������: ���� - Chair";
            break;
        case 8:
            cout << "[-]�������: ��������� - Computer";
            break;
        case 9:
            cout << "[-]�������: ����� - Book";
            break;
        case 10:
            cout << "[-]�������: ���� - Game";
            break;
        case 11:
            cout << "[-]�������: ������� - Human";
            break;
        case 12:
            cout << "[-]�������: ��� - Cat";
            break;
        case 13:
            cout << "[-]�������: ������� - Bed";
            break;
        case 14:
            cout << "[-]�������: ����� - Door";
            break;
        case 15:
            cout << "[-]�������: ���� - Cupboard";
            break;
        default:
            cout << "[-]�� ����� �� ������ ��������" << endl;
        }
        break;
    case 2:
        cout << "[-]���������� \"������ ���������� ����\"" << endl;
        cout << endl;
        cout << "[1]Keyboard" << endl;
        cout << "[2]Mouse" << endl;
        cout << "[3]Monitor" << endl;
        cout << "[4]Headphones" << endl;
        cout << "[5]Rug" << endl;
        cout << "[6]Table" << endl;
        cout << "[7]Chair" << endl;
        cout << "[8]Computer" << endl;
        cout << "[9]Book" << endl;
        cout << "[10]Game" << endl;
        cout << "[11]Human" << endl;
        cout << "[12]Cat" << endl;
        cout << "[13]Bed" << endl;
        cout << "[14]Door" << endl;
        cout << "[15]Cupboard" << endl;
        cout << endl;
        cout << "[-]�������� ����� �����: ";
        cin >> menu;
        system("cls");
        switch (menu)
        {
        case 1:
            cout << "[-]�������: Keyboard - ����������";
            break;
        case 2:
            cout << "[-]�������: Mouse - ����";
            break;
        case 3:
            cout << "[-]�������: Monitor - �������";
            break;
        case 4:
            cout << "[-]�������: Headphones - ��������";
            break;
        case 5:
            cout << "[-]�������: Rug - ������";
            break;
        case 6:
            cout << "[-]�������: Table - ����";
            break;
        case 7:
            cout << "[-]�������: Chair - ����";
            break;
        case 8:
            cout << "[-]�������: Computer - ���������";
            break;
        case 9:
            cout << "[-]�������: Book - �����";
            break;
        case 10:
            cout << "[-]�������: Game - ����";
            break;
        case 11:
            cout << "[-]�������: Human - �������";
            break;
        case 12:
            cout << "[-]�������: Cat - ���";
            break;
        case 13:
            cout << "[-]�������: Bed - �������";
            break;
        case 14:
            cout << "[-]�������: Door - �����";
            break;
        case 15:
            cout << "[-]�������: Cupboard - ����";
            break;
        default:
            cout << "[-]�� ����� �� ������ ��������";
        }
        break;
    case 3:
        cout << "[-]�� ����� �� �����������";
        return 0;
    default:
        cout << "[-]�� ����� �� ������ ��������";
    }
    return 0;
}