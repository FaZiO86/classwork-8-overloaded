#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
			//������ 2
	cout << "������ 2" << "\n";
	cout << "������� �����: " << "\n";
	int n;
	cin >> n;
	if (n > 1) {
		cout << "������ ����� = " << n << "\n\n";
	}else
		if (n == 0) {
			cout << "������ ����� = 0" << "\n\n";
		}else
			if (n < 0 ) {
				cout << "������ ����� = " << -n << "\n\n";
			}
			
			//������ 3
	cout << "������ 3\n������� �����: ";
	int num;
	cin >> num;
	if (num >= 10 && num <= 99) {
		if (num % 3)
		cout << "����� �� �������� ��� �������" << "\n\n";
	else
		cout << "����� �������� ��� �������." << "\n\n";
	}
	else
		cout << "������ �����" << "\n\n";

			//������ 4
	cout << "������ ��������\n������� 3 �����." << "\n";
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	if (n1 < n2 && n1 < n3)
		cout << "����������� �����: " << n1 << "\n\n";
	else
		if (n2 < n3 && n2 < n1)
			cout << "����������� �����: " << n2 << "\n\n";
		else if (n3 < n1 && n3 < n2)
			cout << "����������� �����: " << n3 << "\n\n";
		else
			cout << "����������� ����� 2 ��� ������." << "\n\n";

			//������ 5
	cout << "������ �����\n������� ����������� �����: ";
	int x, x1, x2;
	cin >> x;
	x1 = x % 10;
	x2 = x / 10;
	if (x1 > x2)
		cout << x2 << " < " << x1;
	else
		if (x1 < x2)
			cout << x2 << " > " << x1;
		else
			cout << "��� ����� �����." << "\n\n";

			//������ 6
	cout << "������ ������\n������� �����: " << "\n";
	char le;
	cin >> le;
	switch (le) {
	case 'c': case 'C': cout << "���!" << "\n\n"; break;
	case 'd': case 'D': cout << "���!" << "\n\n"; break;
	case 'y': case 'Y': cout << "���!" << "\n\n"; break;
	default: cout << "������ �����!" << "\n\n";
	}

	return 0;
}