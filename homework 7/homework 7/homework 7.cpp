#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
			//������ 1
	cout << "������ 1\n������� ��� ���� �����: ";
	int a1, a2, b1, b2;
	cin >> a1 >> a2 >> b1 >> b2;
	if (a1 + a2 > b1 + b2) {
		cout << "������������ ������ ���� = " << a1 * a2 << "\n\n";
	}
	else
		if (b1 + b2 > a1 + a2) {
			cout << " ������������ ������ ���� = " << b1 * b2 << "\n\n";
		}
		else
			cout << "������ �����!";

			//������ 2
	cout << "������ 2\n������� �����: ";
	unsigned int a;
	cin >> a;
	switch (a) {
	case 1: cout << " ! " <<"\n\n"; break;
	case 2: cout << " @ " << "\n\n"; break;
	case 3: cout << " # " << "\n\n"; break;
	case 4: cout << " $ " << "\n\n"; break;
	case 5: cout << " % " << "\n\n"; break;
	case 6: cout << " ^ " << "\n\n"; break;
	case 7: cout << " & " << "\n\n"; break;
	case 8: cout << " * " << "\n\n"; break;
	case 9: cout << " ( " << "\n\n"; break;
	case 0: cout << " ) " << "\n\n"; break;
	default: cout << "������ �����!" << "\n\n";
	}

			//������ 3
	cout << "������ 3\n������� ����� ����������:" << "\n";
	cout << "������� � 11 -> 1" << "\n";
	cout << "������� � 52 -> 2" << "\n";
	cout << "������� � 70 -> 3" << "\n";
	cout << "������� � 151 -> 4" << "\n";
	int x;
	cin >> x;
	switch (x) {
	case 1: cout << "������� �� ������� 11 ��" << "\n\n"; break;
	case 2: cout << "������� �� �������� 15 ��" << "\n\n"; break;
	case 3: cout << "������� �� ����������� 8 ��" << "\n\n"; break;
	case 4: cout << "������� �� �������� 140 ��" << "\n\n"; break;
	default: cout << "������ �������� ���, ����� ������!" << "\n\n";
	}

			//������ 4
	cout << "������ 4\n������� ������: ";
	char n;
	int m, m2;
	cin >> n;
	switch (n) {
	case 'Q': case 'W': case 'E': case 'R': case 'T':case 'Y':
		cout << "������� ��� �����: ";
		cin >> m >> m2;
		cout << "������������ ���� ����� = " << m * m2 << "\n\n"; break;
	case 'q': case 'w': case 'e': case 'r': case 't': case 'y':
		cout << "������� �����: ";
		cin >> m;
		cout << "������� ����� ����� = " << m * m << "\n\n"; break;
	default: cout << "������ �����!";
	}
	return 0;
}
