#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");

	int n, e, count = 0, a;

		//������ 2
	cout << "������ 2\n������� ���-�� �������: ";
	cin >> n;
	int newE = 0;
	for (int i = 0; i < n; i++) {
		cout << "������� ������� " << count + 1 << " ������: ";
		cin >> e;
		if (e >= newE)
			newE = e;
		count++;
	}
	cout << "����� ������ ������ � ��������� " << newE << endl << endl;

		//������ 3
	cout << "������ 3\n������� ������ ���� �� ���������: ";
	cin >> a;
	cout << "������� ������ ���� �� �����������: ";
	cin >> e;
	if (a % 2 != 0 && e % 2 != 0 && a >= 5 && e >= 5) {
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < e; j++) {
				if (i == 0)
					cout << " # ";
				else if (j == 0)
					cout << " # ";
				else if (a == i + 1)
					cout << " # ";
				else if (e == j + 1)
					cout << " # ";
				else if (a - i - 1 <= i && a - i > i)
					cout << " * ";
				else if (e - j - 1 <= j && e - j > j)
					cout << " * ";
				else
					cout << "   ";
			}
			cout << endl;
		}
	}
	else
		cout << "������ �����!" << endl << endl;

		//������ 4
	
	

	return 0;
}