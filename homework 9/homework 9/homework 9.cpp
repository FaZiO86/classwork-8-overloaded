#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");


			//������ 1
	int a, n;
	cout << "������ 1\n������� �����: ";
	cin >> a;
	int sum = 0;
	while (a <= 100) {
		sum += a;
		a++;
	}
	cout << "����� ����� = " << sum << "\n\n";


			//������ 2
	cout << "������ 2\n������� �����: ";
	cin >> a;
	n = 0;
	int multi = 0;
	while (n <= 9) {
		multi = a * n;
		cout << multi << "\n";
		n++;
	}
	cout << "\n";


			//������ 3
	cout << "������ 3\n������� ������ �����: ";
	cin >> a;
	cout << "������� ������ �����: ";
	cin >> n;
	while (n != a * a) {
		cout << "������� ������ ����� ��� ���: ";
		cin >> n;
	}
	cout << "������ ������!" << "\n\n";
		
	return 0;
}