#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	
	int n, m = 427, count, sum;

		//������ 1
	/*cout << "������ 1\n������� �����: ";
	cin >> n;
	count = 0;
	m = n;
	while (m) {		//� ������� �� m ���������� � ����.
		count++;
		m /= 10;
	}
	cout << "������ ����� " << n << " = " << count << endl << endl;*/

		//������ 2
	cout << "������ 2\n������� 1 �����: ";
	cin >> n;
	m = n;
	int k = 1, maxK = 1, newN = n;
	count = 0;
	while (newN) {
		count++;
		newN /= 10;
	}
	while (n) {
		k++;
		cout << "������� " << k << " �����: ";
		cin >> n;
		if (n > m) {
			count = 0;
			newN = n;
			while (newN) {
				count++;
				newN /= 10;
			}
			maxK = k;
			m = n;
		}
	}
	cout << "������������ ����� = " << m << endl;
	cout << "��� ������ = " << count << endl;
	cout << "���������� ����� = " << maxK << endl << endl;

		//������ 3. FizzBuzz
	/*cout << "������ 3\n������� �����: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {	//�������� ������ �� �����������!
		if (i % 3 == 0 && i % 5 == 0)		//���������� ������� (n % 15 == 0)
			cout << "FizzBuzz" << endl;
		else
			if (i % 3 == 0)
				cout << "Fizz" << endl;
			else
				if (i % 5 == 0)
					cout << "Buzz" << endl;
				else
					cout << i << endl;
		cout << endl;
	}*/

		//������ 4 ������� ��������� �����.
	/*cout << "������ 4\n������� �����: ";
	cin >> n;
	long long fact = 1;
	for (int i = 2; i <= n; i++)
		fact *= i;
	cout << n << "! = " << fact << endl << endl;*/

		//������ 5
	/*cout << "������ 5\n������� ������ � ����� ������� ���������: ";
	cin >> n >> m;
	cout << "������� ������ � ����� ������� ���������: ";
	int a, b, sum1 = 0, sum2 = 0;
	cin >> a >> b;
	for (int i = 1; i <= m; i++)
		sum1 += i;
	for (int i = a; i <= b; i++)
		sum2 += i;
	if (sum1 > sum2)
		cout << "����� ����� �� " << n << " �� " << m << " ������.\n\n";
	else
		if (sum1 < sum2)
			cout << "����� ����� �� " << a << " �� " << b << " ������.\n\n";
		else
			cout << "����� ����� ����� ���������� �����.\n\n";*/

		//������ 6.1 ����������� �����
	/*cout << "������ 6\n������� ����� ������ ����: ";
	cin >> n;
	sum = 0;
	for (int i = 1; i <= n / 2; i++)
		if (n % i == 0)
			sum += i;
	if (sum == n)
		cout << "����� " << n << " �������� �����������." << endl;
	else
		cout << "����� " << n << " �� �������� �����������." << endl;*/
		
		// ������ 6.2
	/*cout << "������ 6.2\n����������� ����� �� 1 �� 10000:" << endl;
	for (int j = 1; j <= 10000; j++) {
		sum = 0;
		for (int i = 1; i <= j / 2; i++)
			if (j % i == 0)
				sum += i;
		if (sum == j)
			cout << "����� " << j << endl;
	}*/

		//������ 7
	cout << "������ 7\n� ������� ����� �� 1 �� 500, �������� ��� �������: " << endl;
	cin >> n;
	count = 1;
	
	while (m != n) {
		count++;
		if (n == 0) {
			cout << "�� ������ ��������� �� �����, �� ����!" << endl;
			cout << "�� ������������ " << count - 2 << " �������!" << endl;
			break;
		}
		else
			if (n > m) {
				cout << "�� ���������, �� ����� ������\n���������� ��� ���: " << endl;
				cin >> n;
			}
			else
				if (n < m) {
					cout << "�� ���������, �� ����� ������\n���������� ��� ���: " << endl;
					cin >> n;
				}
	}
	if (n == m)
		cout << "����������, �� ������� �� �����, ����������� " << count << " �������!" << endl << endl;


	return 0;
}