#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a = 8;
		//������ 1
	cout << "������ 1" << endl;				//��� ������� ����� � ��������� :(  �� ���������� ��� � ���� ����������� ���������� ��� � ������ ������, ��� � �� ������. � ������� ���� ������� ����� ����� �������� ���! �����!
	for (int i = 2; i < 1000; i++)
	{
		for (int m = i - 1; m > 1; m--)
		{
			if (i % m == 0)
				break;
			if (m == 2)
				cout << i << "\n";
		}
	}
	cout << endl << endl;

		//������ 2
	cout << "������ 2" << endl;							//� ����������� ������� ������� ���� ����� 7, ��� � �������� �������.
	cout << "������� ������ �������: ";					// � �������� ���, ����� ������������ ������ ������ �����, ��� �� ���������� ���� ��������, ������ �� ������ ))) ����� ����� ������ ���.
	cin >> a;											//������� ���� �����, �� ���� ��� ������.... 
	if (a % 2 == 0) {
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < a; j++) {
				if (i + j == a - 1)
					cout << " *";
				else if (a / 2 - 1 == j || a / 2 == j)
					cout << " *";
				else if (a / 2 - 1 == i || a / 2 == i)
					cout << " *";
				else if (i == j)
					cout << " *";
				else
					cout << "  ";
			}
			cout << endl;
		}
	}
	else
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < a; j++) {
				if (i + j == a - 1)
					cout << " *";
				else if (a - i - 1 <= i && a - i > i)
					cout << " *";
				else if (a - j - 1 <= j && a - j > j) 
					cout << " *";
				else if (i == j)
					cout << " *";
				else
					cout << "  ";
			}
			cout << endl;
	}

	return 0; 
}
