#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

		//������ 1 "������� ���������"

	/*cout << "������� ���������/\n";
	for (int i = 1; i <= 9; i++) {		//��� ������� ������ �� ���������� ��������� �����, � ������ ������� ������������� ���� I
		for (int j = 1; j <= 9; j++)	//���� J. �� �������� ������ ���� ����� I, ������ �������� ��� ������ ��������� ����� I
			cout << i << " * " << j << " = " << i * j << "\t";	//���� ����� J ������� ��� �� �������� ����� ����� I
		cout << "\n";
	}	//����� ���� ����� I
	cout << "\n";*/

		//������ 2 ������ ���

	/*cout << "������� ������ ����: ";
	cin >> n;
	for (int i = 0; i < n + 1; i++) {
		for (int j = 0; j < n; j++)
			if (i > j && i + j > n - 1) //�����
				cout << "|VVV|";
			else
				cout << "     ";
		cout << "\n";
	}
	for (int i = 0; i < n; i++) {	//��� ���
		for (int j = 0; j < n; j++)
			cout << "|###|";
		cout << "\n";
	}*/

		//������ ��� ���������.

	/*int a = 0, b = 0;
	cout << "������� ������ �����: ";
	cin >> a;
	cout << "������� ������ �����: ";
	cin >> b;
	int c = 0;
	c = a / b;
	cout << a << " / " << b << " = " << c << "\n\n";*/

	/*cout << "������� �����: ";
	cin >> n;
	if (n % 2 == 0)
		n++;
	else
		cout << "Not nice!\n";
	for (int i = 0; i < n; i++) {
		cout << "�������� " << i;
		cout << "\n";
	}
	cout << "\n";*/

		//������ 1
	
	/*char sym;			//char ��� ��������� ����������!
	cout << "������ 1\n������� ������: ";
	cin >> sym;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
			cout << sym << " ";
		cout << endl;	//endl ��� ��� �� ��� � "\n"
	}*/

		//������ 2

	/*cout << "������ 2\n������� ������ ���������: ";
	cin >> n;
	cout << "������� ����� ���������: ";
	cin >> m;
	int count;
	for (int i = n; i <= m; i++) {
		count = 1;
		for (int j = 1; j <= i / 2; j++)
			if (i % j == 0)
				count++;
		cout << "���������� ��������� ����� " << i << " = " << count << endl;
	}*/

	return 0;
}
